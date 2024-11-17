/*
For this program, using US dollars and cents.

Write a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents and
    1 penny is 1 cent

Here is a sample run:

Enter an amount in cents: 92

You can provide this change as follows:
dollars: 0
quarters: 3
dimes: 1
nickels: 1
pennies: 2

Feel free to use your own currency system.

Also think of how you might solve the problem using the modulo operator.

Have fun and test your program!

Don't forget to test with 0 (0s everywhere)
*/

#include <iostream>

int main() {
    int cents{0};
    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;
    int dollars = cents / 100;
    cents %= 100;
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    cents %= 5;
    int pennies = cents;
    std::cout << "You can provide this change as follows:" << std::endl;
    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quarters: " << quarters << std::endl;
    std::cout << "dimes: " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << pennies << std::endl;
    return 0;
}
