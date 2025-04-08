#include <iostream>

unsigned long long factorial(unsigned long long n){
    if (n == 0) 
        return 1;
    return n * factorial(n-1);
}

int main()
{
    std::cout << factorial(8);
    return 0;
}
