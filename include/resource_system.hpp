#ifndef RESOURCE_SYSTEM_HPP
#define RESOURCE_SYSTEM_HPP

#include "system.hpp"
#include "resource.hpp"
#include <map>

namespace game
{
    class Resource;

    class ResourceSystem : public System
    {
        friend class Resource;
    public:
        ResourceSystem(std::string name);
        
        void run();

        Resource *getResource(int rid) const;

    private:
        int registerResource(Resource *resource);
        void destroyResource(int rid);

    private:
        std::map<int, Resource*> resources;
    };
}

#endif // RESOURCE_SYSTEM_HPP
