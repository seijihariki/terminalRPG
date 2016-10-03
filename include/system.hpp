#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include "types.hpp"

#include <string>

namespace game
{
    enum l_type;

    class System
    {
    public:
        System(std::string name);
        ~System();
    
    public:
        virtual void run() = 0;
        void log(l_type type, std::string message);

        void setColors(bool on);

    private:
        void log_color(int color);

    protected:
        std::string sys_name;
        bool colors_on;
    };
}

#endif
