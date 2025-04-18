/*
Implementing a Recursive Function - Sum of Digits
Problem Title: Sum of Digits using Recursion

Problem Description:
Write a C++ program to find the sum of digits of a number using recursion.
You need to implement the function int sum_of_digits(int n) that takes an integer n as an argument and
returns the sum of its digits.
Function Signature:
int sum_of_digits(int n)
Input:
An integer
Output:
Return the sum of the digits of n.
Example:
Input:
n = 1234
Output:
10
Explanation:
The sum of digits of 1234 is 1 + 2 + 3 + 4 = 10.
Here are a few more examples:
Test Case 1:
Input: n = 5678
Output: 26
Test Case 2:
Input: n = 9999
Output: 36
Test Case 3:
Input: n = 1000
Output: 1
*/
#include <iostream>

int sum_of_digits(int n){
    const int divisor=10;
    int quotient = n / divisor;
    int remainder = n % divisor;
    if (quotient == 0) {return remainder;}
    return remainder + sum_of_digits(quotient);
}

int main()
{
    std::cout << sum_of_digits(5678) << '\n';
    // Output: 26
    // Test Case 2:
    std::cout << sum_of_digits(9999) << '\n';
    // Output 36
    // Test Case 3:
    std::cout << sum_of_digits(1000) << '\n';
    // Output: 1   
};


/*
Review
=======
* That took way too long
* Mixed up use of quotients and remainder
* Then mixed up the symbol & with % - % is the modulo

Feedback
========
* Think out loud about how you will solve the problem (as if you're in an interview)
* Then run some cases without writing code try to avoid patterns and special cases
* Recursive case and Base case

*/