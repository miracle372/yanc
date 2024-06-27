// machine.cpp
// Retrieves information about the machine running yanc

#ifndef YANC_MACHINE_HPP
#define YANC_MACHINE_HPP

#include <string>

namespace yanc
{
    /// Should return the system's hostname
    std::string_view hostname();
}

#endif