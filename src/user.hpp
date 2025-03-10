// user.hpp
// Retrieves information about current user

#ifndef YANC_USER_HPP
#define YANC_USER_HPP

#include <string>

namespace yanc
{
    namespace user
    {
        /// Returns the username of the user calling yanc
        std::string_view username();
    }
}

#endif