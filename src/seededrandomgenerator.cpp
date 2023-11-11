/*
    LICENSED UNDER MIT LICENSE
    REFER TO LICENSE FILE IN ROOT OF PROJECT
    SŁAWOMIR KOZOK 2023
*/

#include "seededrandomgenerator.hpp"

namespace Locus {

SeededRandomGenerator::SeededRandomGenerator(uint64_t seed):
_generator(seed)
{

}

double SeededRandomGenerator::getRandomDouble(double min, double max)
{
    std::uniform_real_distribution<> distribution(min, max);
    return distribution(_generator);
}

uint64_t SeededRandomGenerator::getRandomUnsignedInteger(uint64_t min, uint64_t max)
{
    std::uniform_int_distribution<uint64_t> distribution(min, max);
    return distribution(_generator);
}

int64_t SeededRandomGenerator::getRandomInteger(int64_t min, int64_t max)
{
    std::uniform_int_distribution<int64_t> distribution(min, max);
    return distribution(_generator);
}

std::unique_ptr<SeededRandomGenerator> SeededRandomGenerator::spawnGenerator()
{
    return std::make_unique<SeededRandomGenerator>(_generator());
}

}
