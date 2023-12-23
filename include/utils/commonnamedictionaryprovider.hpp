#ifndef COMMONNAMEDICTIONARYPROVIDER_HPP
#define COMMONNAMEDICTIONARYPROVIDER_HPP

#include "utils/inamedictionaryprovider.hpp"

#include <vector>
#include <string>

namespace Locus
{

class CommonNameDictionaryProvider : public INameDictionaryProvider {
private:
    std::vector<std::vector<std::string>> _texts;
public:
    virtual size_t getNameSourcesCount() const override;
    virtual size_t getNameSourceSize(size_t index) const override;
    virtual std::string getNamePart(size_t sourceIndex, size_t partIndex) const override;

    void addTextSource(const std::vector<std::string>& textSource);
};

} // namespace Locus


#endif