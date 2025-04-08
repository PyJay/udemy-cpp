#include <iostream>
unsigned long long fibonacci(unsigned long long n){
    // base cases
    if (n == 0){
     return 0;
    }
    if (n == 1){
     return 1;
    }
    // recursive case
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    std::cout << fibonacci(0) << std::endl;
    std::cout << fibonacci(1) << std::endl;
    std::cout << fibonacci(30) << std::endl;
    return 0;
}
