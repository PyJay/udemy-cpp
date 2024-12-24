/*
Nested Loops - Sum of the Product of all Pairs of Vector Elements
Given a vector of integers named vec that is provided for you, find the sum of the product of all pairs of vector elements.
You should declare an integer variable named result and store the final product in this variable.

For example, given the vector  vec  to be {1, 2 , 3} , the possible pairs are (1,2), (1,3), and (2,3) . 
So the result would be (1*2) + (1*3) + (2*3)  which is 11 .

Another example:
Given the vector vec to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .

If the vector is empty or has only 1 element then the result should be 0 .

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/

#include <vector>
#include <iostream>

using namespace std;

int calculate_pairs(vector<int> vec) {
    if (vec.size() <= 1)
        return 0;
    int total = 0;
    for (auto idx{0}; idx < vec.size() - 1; idx++){
        for (auto idx2{idx+1}; idx2 < vec.size(); idx2++) {
            total += (vec[idx] * vec[idx2]);
        }
    }
    return total;
}

void main(){
    vector<int> test_v{2,4,6,8};
    cout << calculate_pairs(test_v);
}