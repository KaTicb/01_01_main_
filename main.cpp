#include <iostream>
#include <string>

int main(int argc, char** argv, char** env){

    std::cout<<"argc"<<std::endl<<std::endl;
    std::cout<<argc<<std::endl<<std::endl;

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
    return 0;

}

//#include <sys/syscall.h>
//#include <unistd.h>
//
//int print(const char* message, int size)
//{
//    int exit_code = 0;
//    syscall(SYS_write, 1, message, size);
//    return exit_code;
//}
//
//int main(int /*argc*/, char* /*argv*/ [])
//{
//    return print("hello world\n", 12);
//}
//
//extern "C"
//{
//void _start()
//{
//    int result_code = main(0, nullptr);
//    syscall(SYS_exit, result_code);
//}
//}

