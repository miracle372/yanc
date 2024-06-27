#include <iostream>
#include <string>

int main()
{
    // TODO: setup config.h to have a version constant in it
    std::string yanc_version = "0.1";
    std::cout << "yanc " << yanc_version << "\n\n";

    //placeholders
    std::cout << "user@hostname" << '\n';
    std::cout << "distro name (version)" << '\n';
    std::cout << "kernel version" << '\n';

    return 0;
}