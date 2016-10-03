#include "entity.hpp"

namespace game
{
    Entity::Entity(EntitySystem &_entitySystem)
        : pos(0, 0), angle(0), entitySystem(_entitySystem)
    {
        id = entitySystem.registerEntity(this);
    }

    Entity::Entity(EntitySystem &_entitySystem, vector2f _pos)
        : pos(_pos), angle(0), entitySystem(_entitySystem)
    {
        id = entitySystem.registerEntity(this);
    }

    Entity::Entity(EntitySystem &_entitySystem, vector2f _pos, double _angle)
        : pos(_pos), angle(_angle), entitySystem(_entitySystem)
    {
        id = entitySystem.registerEntity(this);
    }

    Entity::~Entity()
    {
        entitySystem.destroyEntity(id);
    }

    
    int Entity::getEntityId() const
    {
        return id;
    }

    vector2f Entity::getPosition() const
    {
        return pos;
    }

    void Entity::setPosition(vector2f _pos)
    {
        pos = _pos;
    }
    
    double Entity::getAngle() const
    {
        return angle;
    }

    void Entity::setAngle(double _angle)
    {
        angle = _angle;
    }
}
