// Section 9
// For Loop
#include <iostream>
#include <vector>

using namespace std;

int main() {

    // for (int i{1}; i < 10; ++i)
    //     cout << i << endl;
    
    // odds
    // for (int i{1}; i <= 10; i+=2)
    //     cout << i << endl;

    // countdown
    // for (int i{10}; i>0; i--)
    //     cout << i << endl;
    // cout << "Blastoff!";

    // tens divisible by 15 (less than 100)
    // for (int i{10}; i < 100; i+=10) {
    //     if (i % 15 == 0)
    //          cout << i << endl;
    // }

    // addition of ints up to 5
    // not the multi init and multi increment
    // for (int i{1}, j{5}; i <= 5; ++i, ++j)
    //     cout << i << " + " << j << " = " << (i + j) << endl;

    // print table of 1 to 100 with set num of cols
    // for (int i{1}; i <=100; i++) {
    //     cout << i;
    //     if (i % 10 == 0)
    //         cout << endl;
    //     else
    //         cout << " ";
    // }

    // print table of 1 to 100 with set num of cols using ternary if
    //     for (int i{1}; i <=100; i++) {
    //     // why does the endl not worked below?
    //     cout << i << (( i % 10 == 0) ? "\n": " "); 
    // }

    // print nums in a vector
    vector<int> nums {10,20,30,40,50};
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;

    cout << endl;
    return 0;
}


