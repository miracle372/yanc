// system.cpp
// Retrieves information about the system running yanc

#include "system.hpp"

#include <fstream>
#include <string>

namespace yanc
{
    namespace system
    {
        std::string_view hostname()
        {
            std::ifstream hostname_file("/proc/sys/kernel/hostname");
            std::string hostname_file_contents;
            std::getline(hostname_file, hostname_file_contents);

            return hostname_file_contents;
        }
    }
}
