#include <iostream>
#include <string>

#include <config.h>

#include "machine.hpp"
#include "user.hpp"

int main()
{
    std::cout << "yanc " << YANC_VERSION << "\n\n";

    // hostname@username
    std::cout << yanc::username() << '@' << yanc::hostname() << '\n';

    std::cout << "kernel version" << '\n';
    std::cout << "distro name (version)" << '\n';

    return 0;
}