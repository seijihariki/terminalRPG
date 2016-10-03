#ifndef ENTITY_SYSTEM_HPP
#define ENTITY_SYSTEM_HPP

#include "system.hpp"
#include "entity.hpp"

#include <map>
#include <chrono>

namespace game
{
    class Entity;
    class System;

    class EntitySystem : public System
    {
        friend class Entity;
    public:
        EntitySystem(std::string name);

        void run();

        Entity *getEntity(int eid) const;

    private:
       int registerEntity(Entity *entity);
       void destroyEntity(int eid);

    private:
       std::map<int, Entity*> entities;
       std::chrono::time_point<std::chrono::high_resolution_clock> last_time;
    };
}

#endif
