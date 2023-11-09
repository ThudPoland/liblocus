/*
    LICENSED UNDER MIT LICENSE
    REFER TO LICENSE FILE IN ROOT OF PROJECT
    SŁAWOMIR KOZOK 2023
*/


#ifndef SEEDED_RANDOM_GENERATOR_HPP
#define SEEDED_RANDOM_GENERATOR_HPP

#include <random>
#include <cstdint>
#include <memory>

class SeededRandomGenerator {
public:
    SeededRandomGenerator(uint64_t seed);
    
    double getRandomDouble(double min, double max);
    uint64_t getRandomUnsignedInteger(uint64_t min, uint64_t max);
    int64_t getRandomInteger(int64_t min, int64_t max);
    std::unique_ptr<SeededRandomGenerator> spawnGenerator();
private:
    std::mt19937_64 _generator;
};

#endif //SEEDED_RANDOM_GENERATOR_HPP
