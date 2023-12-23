/*
    LICENSED UNDER MIT LICENSE
    REFER TO LICENSE FILE IN ROOT OF PROJECT
    SŁAWOMIR KOZOK 2023
*/

#include "utils/commonnamedictionaryprovider.hpp"
#include "generation/namegenerator.hpp"
#include "random/seededrandomgenerator.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <filesystem>

#include <fstream>

#include <SFML/Window.hpp>
#include "SFML/Graphics.hpp"

void readFromFile(std::filesystem::path dataPath, std::vector<std::string>& output)
{
    std::ifstream file;
    file.open(std::filesystem::absolute(dataPath));
    while(!file.eof())
    {
        std::string line = "";
        std::getline(file, line);
        if(line.length() > 0)
        {
            output.push_back(line);
        }
    }
}

int main(int argc, char** argv)
{
    std::vector<std::string> part1Texts;
    std::vector<std::string> part2Texts;
    std::vector<std::string> part3Texts;

    Locus::SeededRandomGenerator generator(1);
    Locus::CommonNameDictionaryProvider nameProvider;
    Locus::NameGenerator nameGenerator(nameProvider, generator);

    readFromFile("/home/slawomir/MIPSO/liblocus/resources/text-generation/place-part-1.txt", part1Texts);
    readFromFile("/home/slawomir/MIPSO/liblocus/resources/text-generation/place-part-2.txt", part2Texts);
    readFromFile("/home/slawomir/MIPSO/liblocus/resources/text-generation/place-part-3.txt", part3Texts);

    nameProvider.addTextSource(part1Texts);
    nameProvider.addTextSource(part2Texts);
    nameProvider.addTextSource(part3Texts);

    size_t namesToGenerate = 25;

    for(size_t counter = 0; counter < namesToGenerate; counter++)
    {
        std::cout << nameGenerator.generateName() << std::endl;
    }

    sf::RenderWindow window(sf::VideoMode(800, 600), "Locus Visualiser");
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear(sf::Color(38, 30, 40));
        window.display();
    }

    return 0;
}
