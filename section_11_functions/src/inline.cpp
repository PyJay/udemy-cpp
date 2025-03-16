#include <iostream>

inline int add_numbers(int a, int b) {
    return a + b;
}

int main(){
    int result{0};
    result=add_numbers(100, 200);
    std::cout << result;
}