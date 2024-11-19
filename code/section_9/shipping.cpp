// Section 9
// Shipping

/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/
#include <iostream>
#include <iomanip>

int main(){
    std::cout << "Enter the package dimension in inches (length, width, height separated by space)" << std::endl;
    int length{}, width{}, height{}; 
    std::cin >> length;
    std::cin >> width;
    std::cin >> height;

    if (length > 10 | width > 10 | height > 10){
        std::cout << "The length, width or height cannot exceed more than 10 inches";
    }
    else {
        double cost = 2.50;
        const double volume = length * width * height;
        if (volume > 100) {
            cost *= 1.10;
        }
        else if (volume > 500) {
            cost *= 1.25;
        };
        std::cout << "The cost is " << cost;       
    }
    return 0;
}