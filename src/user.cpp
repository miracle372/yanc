// user.cpp
// Retrieves information about current user

#include "user.hpp"

#include <unistd.h>

namespace yanc
{
    namespace user
    {
        std::string_view username()
        {
            // this solution is way too simple there's no way this isn't foolproof
            return getlogin();
        }
    }
}
