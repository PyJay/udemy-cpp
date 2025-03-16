#include <iostream>

void zero_array(int nums [], size_t size){
    for (size_t i{0}; i < size; ++i)
        nums[i] = 0; // zero out array element
}

void print_array(int nums[], size_t size){
    for (size_t i{0}; i < size; ++i)
        std::cout << nums[i];
}

int main() {
    int my_nums[] {1, 2, 3, 4, 5};
    zero_array(my_nums, 5);
    print_array(my_nums, 5);
    return 0;
}