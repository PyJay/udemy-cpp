/*
 * This program demonstrates the use of an enum and a switch statement in C++.
 * 
 * The program defines an enum named `Color` with three possible values: `red`, `green`, and `blue`.
 * It then sets a variable `screen_color` of type `Color` to `green`.
 * 
 * The switch statement checks the value of `screen_color` and prints the corresponding color name to the console.
 * If `screen_color` is `red`, it prints "red".
 * If `screen_color` is `green`, it prints "green".
 * If `screen_color` is `blue`, it prints "blue".
 * 
 * The default case in the switch statement is included to handle any unexpected values, 
 * although it should never execute in this example since all possible enum values are covered.
 * Note: it's interesting that the member of the enum can be accessed without the enum name.
 * This is because the enum is in the global scope, this was changed in more recent C++ standards.
 * To access the member of the enum, you would need to use the enum name followed by the scope resolution operator.
 */
#include <iostream>



int main() {

    enum Color {
    red, green, blue
    };
    Color screen_color {green};
    switch (screen_color) {
        case Color::red: std::cout << "red"; break;
        case Color::green: std::cout << "green"; break;
        case Color::blue: std::cout << "blue"; break;
        default: std::cout << "should never execute"; break;
    }
    return 0;
}