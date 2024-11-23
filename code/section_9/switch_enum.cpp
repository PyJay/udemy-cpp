// Section 9
// Switch with enumeration

#include <iostream>

using namespace std;

int main() {

    enum Direction {
        left, right, up, down
    };

    // note: you had to initialize the direction with one of the choices
    // also cin << direction doesn't work (end user wouldn't know the char to use anyway)
    Direction direction{up};

    switch (direction) {
        // note the syntax here has : instead of ; after the case stmt
        case Direction::left:
          cout << "Going left" << endl;
          break;
        case Direction::right:
          cout << "Going right" << endl;
          break;
        // stopping here and not having a default will cause a warning
        // as not all cases covered.
        default:
          cout << "Okay" << endl;
          break;
    }
    cout << endl;
    return 0;
}