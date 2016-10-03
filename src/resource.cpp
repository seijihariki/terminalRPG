#include "resource.hpp"

namespace game
{
    Resource::Resource(ResourceSystem &_resourceSystem, res_type _type, std::string path)
        : type(_type), data(0), resourceSystem(_resourceSystem) 
    {
        id = resourceSystem.registerResource(this);
    }

    int Resource::getResourceId() const
    {
        return id;
    }

    res_type Resource::resourceType() const
    {
        return type;
    }

    resource_pointer Resource::getData() const
    {
        return data;
    }

    void Resource::setData(void* _data)
    {
        data = _data;
    }
}
