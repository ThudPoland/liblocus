#include "utils/commonnamedictionaryprovider.hpp"

namespace Locus
{
size_t CommonNameDictionaryProvider::getNameSourcesCount() const
{
    return _texts.size();
}
size_t CommonNameDictionaryProvider::getNameSourceSize(size_t index) const
{
    if(index < _texts.size())
    {
        return _texts[index].size();
    }
    return 0;
}
std::string CommonNameDictionaryProvider::getNamePart(size_t sourceIndex, size_t partIndex) const
{
    if(sourceIndex < _texts.size() && partIndex < _texts[sourceIndex].size())
    {
        return _texts[sourceIndex][partIndex];
    }
    return "";
}

void CommonNameDictionaryProvider::addTextSource(const std::vector<std::string>& textSource)
{
    _texts.push_back(textSource);
}
} // namespace Locus
