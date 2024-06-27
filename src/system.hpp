// system.cpp
// Retrieves information about the machine running yanc

#ifndef YANC_SYSTEM_HPP
#define YANC_SYSTEM_HPP

#include <string>

namespace yanc
{
    /// Should return the system's hostname
    std::string_view hostname();
}

#endif