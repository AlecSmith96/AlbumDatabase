#include <iostream>
#include "Duration/Duration.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    //Duration Testing
    Duration dur = Duration(0,1,30);
    cout << "Duration: " << dur << endl;

    return 0;
}
