#include "logos/arch.h"
#define COLOR "\e[1;35m"

#define CONFIG \
{ \
   /* name            function                 cached */\
    { "",             get_title,               false }, \
    { "",             get_bar,                 true }, \
    { "  os ~ ",         get_os,                  true  }, \
    { "host ~ ",       get_host,                true  }, \
    { "  up ~ ",     get_uptime,              true }, \
    { " bat ~ ",    get_battery_percentage,  true }, \
    { "  sh ~ ",      get_shell,             true }, \
    { " res ~ ", get_resolution,        true }, \
    { " cpu ~ ",        get_cpu,                 true  }, \
    { " gpu ~ ",        get_gpu1,                true  }, \
    { " mem ~ ",     get_memory,              true }, \
    { "kern ~ ",     get_kernel,              true  }, \
    { "pkgs ~ ",   get_packages_pacman,   true }, \
    { "term ~ ",   get_terminal,          true }, \
	SPACER \
	{ "",             get_colors1,             false }, \
    { "",             get_colors2,             false }, \
}

#define CPU_CONFIG \
{ \
   REMOVE("with"), \
   REMOVE("Radeon"), \
   REMOVE("Graphics"), \
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), \
}
