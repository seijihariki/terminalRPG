#include "system.hpp"
#include <stdio.h>

namespace game
{
    enum COLOR
    {
        RED = 31,
        GREEN = 32,
        YELLOW = 33,
        BLUE = 34,
        PURPLE = 35,
        CYAN = 36,
        GRAY = 37,
        WHITE = 38
    };

    System::System(std::string name) : colors_on(true)
    {
        sys_name = name;
        log(INFO, "System initiated.");
    }

    System::~System()
    {
        log(INFO, "System destroyed.");
    }

    void System::log(l_type type, std::string message)
    {
        switch(type)
        {
        case ERROR:
            if(colors_on) log_color(RED);
            printf("Error: ");
            break;
        case WARNING:
            if(colors_on) log_color(YELLOW);
            printf("Warning: ");
            break;
        case INFO:
            if(colors_on) log_color(BLUE);
            printf("Info: ");
            break;
        default:
            if(colors_on) log_color(WHITE);
            break;
        }

        log_color(WHITE);

        printf("%s - %s\n", sys_name.c_str(), message.c_str());
    }

    void System::setColors(bool on)
    {
        colors_on = on;
    }

    void System::log_color(int color)
    {
        printf("\e[%d;1m", color);
    }
}
