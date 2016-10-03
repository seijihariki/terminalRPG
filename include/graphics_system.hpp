#ifndef GRAPHICS_SYSTEM_HPP
#define GRAPHICS_SYSTEM_HPP

#include "system.hpp"
#include "resource_system.hpp"
#include "drawable.hpp"

#include <string>

namespace game
{
    class Drawable;
    class ResourceSystem;

    class GraphicsSystem : public System
    {
        friend class Drawable;
    public:
        GraphicsSystem(std::string name);

        void run();

        void draw(ResourceSystem &rsystem, Drawable *drawable);

        Drawable *getDrawable(int did);
    private:
        bool registerDrawable(Drawable *drawable);
        void destroyDrawable(int did);

    private:
        std::map<int, Drawable*> drawables;
    };
}

#endif
