
// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.
    
    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>

using namespace std;

int main() {
    int num1{}, num2{}, num3{};
    const int count{3};
    std::cout << "Enter "<< count << " integers separated by spaces: ";
    std::cin >> num1 >> num2 >> num3;
    int total = num1 + num2 + num3;
    double average = static_cast<double>(total)/count;
    std::cout << total << "\n";
    std::cout << "The " << count << " numbers were: " << num1 << "," << num2 << "," << num3 << std::endl;
    std::cout << "The total of the integers is: " << total << " \n";
    std::cout << "The average of the integers is: " << average << " \n";
    return 0;
}

