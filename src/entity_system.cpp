#include "entity_system.hpp"

#include <cstdlib>

namespace game
{
    EntitySystem::EntitySystem(std::string name) : System(name)
    {
        last_time = std::chrono::high_resolution_clock::now();
    }

    void EntitySystem::run()
    {
        for (std::pair<int, Entity*> entity : entities)
            entity.second->update(std::chrono::duration<double>(
                        std::chrono::high_resolution_clock::now() - last_time
                        ));
    }

    Entity *EntitySystem::getEntity(int eid) const
    {
        if(entities.find(eid) == entities.end()) return NULL;
        return entities.at(eid);
    }

    int EntitySystem::registerEntity(Entity *entity)
    {
        if(entities.size() > RAND_MAX) return -1;
        int eid;

        for(eid = rand(); entities.find(eid) != entities.end(); eid = rand());

        entities.insert(std::pair<int, Entity*>(eid, entity));
        return eid;
    }

    void EntitySystem::destroyEntity(int eid)
    {
        std::map<int, Entity*>::iterator it;
        it = entities.find(eid);
        if(it == entities.end()) return;
        else entities.erase(it);
    }
}
