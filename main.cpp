#include <iostream>
#include <string>
#include "lib.h"

int main(int /*argc*/, char ** /*argv*/, char ** /*env*/) {

    std::cout << hello_function() << std::endl;

    return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;

}

