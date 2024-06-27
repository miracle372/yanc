#include "user.hpp"

#include <unistd.h>

namespace yanc
{
    std::string_view username()
    {
        return getlogin();
    }
}
