#ifndef INAMEDICTIONARYPROVIDER_HPP
#define INAMEDICTIONARYPROVIDER_HPP

#include <cstddef>
#include <string>

namespace Locus {

class INameDictionaryProvider {
public:
    virtual ~INameDictionaryProvider() = default;
    virtual size_t getNameSourcesCount() const = 0;
    virtual size_t getNameSourceSize(size_t index) const = 0;
    virtual std::string getNamePart(size_t sourceIndex, size_t partIndex) const = 0;
};

}

#endif //INAMEDICTIONARYPROVIDER_HPP
