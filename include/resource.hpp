#ifndef RESOURCE_HPP
#define RESOURCE_HPP

#include "resource_system.hpp"
#include "math.hpp"

#include <string>

namespace game
{
    enum res_type
    {
        SPRITE_SHEET,
        TEXTURE,
        SOUND_EFFECT,
        FONT
    };

	typedef void* resource_pointer;

    class ResourceSystem;

    class Resource
    {
        friend class ResourceSystem;
    public:
        Resource(ResourceSystem &_resourceSystem, res_type _type, std::string path);
        ~Resource();

    public:
        int getResourceId() const;
        res_type resourceType() const;
        
		resource_pointer getData() const;
		void setData(void* _data);

    protected:
        int id;
        res_type type;
        resource_pointer data;

    private:
        ResourceSystem &resourceSystem;
    };
}

#endif // RESOURCE_HPP
