// Section 11
// Scope example
#include <iostream>

using namespace std;

// function prototypes
void local_example();
void global_example();
void static_local_example();

int num {300};    // Global variable - declared outside any class or function

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl; //300
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl; //600
}

void local_example(int x) {
    int num {1000};     // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl; // 1000
    num=x;
    cout << "Local num is: " << num << " in local_example - end" << endl; // first 10 and then 20
    // num1 in main is not within scope - so it can't be used here.
}

void static_local_example() {
    static int num {5000};      // local to static_local_example static - retains it value between calls
    cout << "\nLocal static  num is: " << num << " in static_local_example - start" << endl; // 5000
    num += 1000; // 6000
    cout << "Local static  num is: " << num << " in static_local_example - end" << endl; // 6000
}

int main() {
    
    int num {100};  // Local to main
    int num1 {500}; // Local to main
    
    cout << "Local num is : " << num << " in main" << endl; //100
    
    {   // creates a new level of scope
        int num {200};  // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl; //200
        cout << "Inner block in main can see out - num1 is: " << num1 << endl; //500
    }
    
    cout << "Local num is : " << num << " in main" << endl; //100

    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    static_local_example(); // the num will increment (1_000)
    static_local_example(); // and again

    cout << endl;
    return 0;
}




