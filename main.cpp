#include <iostream>
#include "Duration/Duration.h"
#include "Track/Track.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    //Duration Testing
    Duration dur = Duration(0,1,30);
    cout << "Duration: " << dur << endl;
    Duration dur2 = Duration(0,59,50);
    cout << "Duration 2: " << dur2 << endl;
    Duration dur3 = dur + dur2;
    cout << "Combined Duration: " << dur3 << endl;

    //Track Testing
    Track track = Track("A Song Title", dur);
    cout << track << endl;
    return 0;
}
