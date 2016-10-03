#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "entity_system.hpp"
#include "math.hpp"

#include <chrono>

namespace game
{
    using namespace math;
    class EntitySystem;

    class Entity
    {
        friend class EntitySystem;
    public:
        Entity(EntitySystem &_entitySystem);
        Entity(EntitySystem &_entitySystem, vector2f _pos);
        Entity(EntitySystem &_entitySystem, vector2f _pos, double _angle);

        virtual void update(std::chrono::duration<double> dt) = 0;

        ~Entity();

    public:
        int getEntityId() const;

        vector2f getPosition() const;
        void setPosition(vector2f _pos);

        double getAngle() const;
        void setAngle(double _angle);

    protected:
        int id;
        vector2f pos;
        double angle;
    
    private:
        EntitySystem &entitySystem;
    };
}

#endif //ENTITY_HPP
