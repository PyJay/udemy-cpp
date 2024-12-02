#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    int count{0};
    bool found=false;
    while (!found && (count < vec.size())) {
        int num = vec[count];
        if (num == -99) 
             found = true;
        else
            count++;
    }
    return count;
}

// the code above is what passed the test. Adding example usage below

int main() {
    vector<int> my_vec{0, 1, 3, -99, 5};
    // expecting 3
    cout << count_numbers(my_vec);
}

//Model solution
// #include <iostream>
// #include <vector>
// using namespace std;

// int count_numbers( const vector<int> &vec) {
//     //---- WRITE YOUR CODE BELOW THIS LINE----
    
//     int count {0};
//     size_t index {0};  // See the Q/A forum for more about size_t
//                        // size_t is an unsigned int
//                        // you can replace size_t with int or unsigned int and it will work fine
    
//     while (index < vec.size() && vec.at(index) != -99  ) {
//         ++count;
//         ++index;
//     }
        
    
//     //---- WRITE YOUR CODE ABOVE THIS LINE----
//     //---- DO NOT MODIFY THE CODE BELOW THIS LINE----
//     return count;
// }