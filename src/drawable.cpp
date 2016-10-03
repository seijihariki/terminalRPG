#include "drawable.hpp"

namespace game
{
    Drawable::Drawable(
            ResourceSystem &_resourceSystem,
            GraphicsSystem &_graphicsSystem,
            EntitySystem &_entitySystem) 
        : Entity(entitySystem),
        resourceSystem(_resourceSystem),
        graphicsSystem(_graphicsSystem),
        entitySystem(_entitySystem)
    {
        drawableId = graphicsSystem.registerDrawable(this);
    }

    Drawable::Drawable(
            int _resourceId,
            ResourceSystem &_resourceSystem,
            GraphicsSystem &_graphicsSystem,
            EntitySystem &_entitySystem)
        : Entity(entitySystem),
        resourceId(_resourceId),
        resourceSystem(_resourceSystem),
        graphicsSystem(_graphicsSystem),
        entitySystem(_entitySystem)
    {
        drawableId = graphicsSystem.registerDrawable(this);
    }

    Drawable::~Drawable()
    {
        graphicsSystem.destroyDrawable(id);
    }

    void Drawable::draw()
    {
        graphicsSystem.draw(resourceSystem, this);
    }


    int Drawable::getDrawableId() const
    {
        return drawableId;
    }

    int Drawable::getResource() const
    {
        return resourceId;
    }

    void Drawable::setResource(int _resourceId)
    {
        resourceId  = _resourceId;
    }
}

