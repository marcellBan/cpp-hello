#include <iostream>

int main(int argc, char *argv[]) {
    if (argc > 1)
        for (int i = 1; i < argc; ++i)
            std::cout << "Hello, " << argv[i] << "!" << std::endl;
    else
        std::cout << "Hello, World!" << std::endl;
    return 0;
}