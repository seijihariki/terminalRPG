#include "graphics_system.hpp"

#include <cstdlib>

namespace game
{
    GraphicsSystem::GraphicsSystem(std::string name) : System(name)
    {
    }

    void GraphicsSystem::run()
    {
        for(auto& drawable : drawables)
            drawable.second->draw();
    }

    void GraphicsSystem::draw(ResourceSystem &rsystem, Drawable *drawable)
    {
    }

    Drawable *GraphicsSystem::getDrawable(int did)
    {
        if(drawables.find(did) == drawables.end()) return NULL;
        return drawables.at(did);
    }

    bool GraphicsSystem::registerDrawable(Drawable *drawable)
    {
        if(drawables.size() > RAND_MAX) return -1;
        int did;

        for(did = rand(); drawables.find(did) != drawables.end(); did = rand());
        drawables.insert(std::pair<int, Drawable*>(did, drawable));
        return did;
    }

    void GraphicsSystem::destroyDrawable(int did)
    {
        std::map<int, Drawable*>::iterator it;
        it = drawables.find(did);
        if(it == drawables.end()) return;
        drawables.erase(it);
    }
}
