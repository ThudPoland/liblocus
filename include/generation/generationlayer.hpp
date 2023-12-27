#ifndef IGENERATIONLAYER_HPP
#define IGENERATIONLAYER_HPP

#include <list>

#include "iworldobject.hpp"

namespace Locus {

class IGenerationLayer
{
public:
    virtual ~IGenerationLayer() = default;
    void generateLayer(std::list<IWorldObject&> objects) const;
};

}

#endif //GENERATIONLAYER_HPP
