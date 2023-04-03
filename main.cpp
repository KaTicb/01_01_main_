#include <iostream>
#include <string>

int main(int /*argc*/, char ** /*argv*/, char ** /*env*/) {

//    std::cout << "argc" << std::endl << std::endl;
//    std::cout << argc << std::endl << std::endl;

    std::string hello_str("Hello, user");

    std::cout << hello_str << std::endl;


//    std::cout<<"argv"<<std::endl<<std::endl;
//    std::string string_argv;
//    std::string string_env;
//    for (int i=0;i<argc;i++){
//        string_argv += argv[i];
//    }
//
//    std::cout<<string_argv<<std::endl<<std::endl;
//    for (int i=0;env[i];i++){
//        string_env += env[i];
//    }

    //  std::cout<<string_env<<std::endl<<std::endl;
    return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;

}

