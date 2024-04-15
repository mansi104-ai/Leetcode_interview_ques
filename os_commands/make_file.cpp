#include <iostream>
#include <sys/stat.h>

int main() {
    if (mkdir("new_directory", 0777) == -1) {
        std::cerr << "Error creating directory\n";
        return 1;
    }
    std::cout << "Directory created successfully\n";
    return 0;
}