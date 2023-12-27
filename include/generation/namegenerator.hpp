#ifndef NAMEGENERATOR_HPP
#define NAMEGENERATOR_HPP

#include <cstdint>

#include "utils/inamedictionaryprovider.hpp"
#include "random/seededrandomgenerator.hpp"

namespace Locus
{

class NameGenerator
{
public:
    NameGenerator(INameDictionaryProvider& nameProvider, SeededRandomGenerator& generator);
    virtual ~NameGenerator();

    std::string generateName() const;
private:
    INameDictionaryProvider& _nameProvider;
    SeededRandomGenerator& _generator;
};

} // namespace Locus

#endif //NAMEGENERATOR_HPP
