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