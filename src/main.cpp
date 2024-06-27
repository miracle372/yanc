#include <iostream>
#include <string>

#include "user.hpp"

int main()
{
    // TODO: setup config.h to have a version constant in it
    std::string yanc_version = "0.1";
    std::cout << "yanc " << yanc_version << "\n\n";

    //placeholders
    std::cout << yanc::username() << '@' << "hostname" << '\n';
    std::cout << "distro name (version)" << '\n';
    std::cout << "kernel version" << '\n';

    return 0;
}