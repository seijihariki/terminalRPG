#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

#include "entity.hpp"
#include "resource_system.hpp"
#include "graphics_system.hpp"
#include "entity_system.hpp"

#include <string>

namespace game
{
    class ResourceSystem;
    class GraphicsSystem;
    class EntitySystem;

    class Drawable : public Entity
    {
        friend class GraphicsSystem;
    public:
        Drawable(ResourceSystem &_resourceSystem,
                GraphicsSystem &_graphicsSystem,
                EntitySystem &_entitySystem);
        Drawable(int _resourceId,
                ResourceSystem &_resourceSystem,
                GraphicsSystem &_graphicsSystem,
                EntitySystem &_entitySystem);
        ~Drawable();

        void draw();

    public:
        int getDrawableId() const;

        int getResource() const;
        void setResource(int _resourceId);

    private:
        int resourceId;
        int drawableId;

        ResourceSystem &resourceSystem;
        GraphicsSystem &graphicsSystem;
        EntitySystem &entitySystem;
    };
}

#endif
