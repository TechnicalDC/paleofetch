#include "logos/term1.h"
#define COLOR "\e[1;35m"

#define CONFIG \
{ \
   /* name            function                 cached */\
    { "",             get_title,               false }, \
    { "  os ~ ",         get_os,                  true  }, \
    { "  sh ~ ",      get_shell,             true }, \
    { "  up ~ ",     get_uptime,              false }, \
    { " bat ~ ",    get_battery_percentage,  false }, \
    { " res ~ ", get_resolution,        true }, \
    { " cpu ~ ",        get_cpu,                 true  }, \
    { " gpu ~ ",        get_gpu1,                true  }, \
    { " mem ~ ",     get_memory,              false }, \
    { "kern ~ ",     get_kernel,              true  }, \
    { "pkgs ~ ",   get_packages_pacman,   false }, \
    { "term ~ ",   get_terminal,          false }, \
    { "host ~ ",       get_host,                true  }, \
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
