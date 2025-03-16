#include <iostream>

// a function that prints an array
void printArray(int my_arr[], size_t size){
    for (size_t i{0}; i < size; ++i){
        std::cout << my_arr[i] << '\n';
    }
    std::cout << '\n';
}

// main func that initializes and arr and prints it
void main(){
    int arr[5]{1,2,3,4,5};
    printArray(arr, 5);
}