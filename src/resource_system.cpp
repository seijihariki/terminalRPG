#include "resource_system.hpp"

#include <cstdlib>

namespace game
{
    ResourceSystem::ResourceSystem(std::string name) : System(name)
    {
    }

    void ResourceSystem::run()
    {
    }

    Resource *ResourceSystem::getResource(int rid) const
    {
        if(resources.find(rid) == resources.end()) return NULL;
        return resources.at(rid);
    }

    int ResourceSystem::registerResource(Resource *resource)
    {
        if(resources.size() > RAND_MAX) return -1;
        int rid;

        for(rid = rand(); resources.find(rid) != resources.end(); rid = rand());

        resources.insert(std::pair<int, Resource*> (rid, resource));
        return rid;
    }
}
