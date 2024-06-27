#include "user.hpp"

#include <unistd.h>

namespace yanc
{
    std::string_view username()
    {
        // this solution is way too simple there's no way this isn't foolproof
        return getlogin();
    }
}
