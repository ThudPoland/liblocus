#include "generation/namegenerator.hpp"

#include <cmath>

namespace Locus
{

NameGenerator::NameGenerator(INameDictionaryProvider& nameProvider, SeededRandomGenerator& generator):
_nameProvider(nameProvider),
_generator(generator)
{
}

NameGenerator::~NameGenerator()
{
}

std::string NameGenerator::generateName() const {
    auto numberOfParts = _generator.getRandomInteger(std::max(1, static_cast<int>(_nameProvider.getNameSourcesCount() - 1)), _nameProvider.getNameSourcesCount());
    std::string generatedName = "";
    for(size_t counter = 0; counter < numberOfParts; counter++)
    {
        auto sourceSize = _nameProvider.getNameSourceSize(counter);
        auto randomPart = _generator.getRandomInteger(0, sourceSize - 1);
        generatedName += _nameProvider.getNamePart(counter, randomPart);
    }
    return generatedName;
} // namespace Locus

}
