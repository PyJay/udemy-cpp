#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

    int scores[] {10, 20, 30};

    //in this case int is easy to type instead of auto
    // but collections/templates get really crazy syntax, sometimes difficult to write the type
    // for (auto score: scores) 
    //     cout << score << endl;

    // vector <double> temperatures{87.9, 77.9, 80.0, 72.5};
    // double average_temp {};
    // double total {};

    // for (auto temp: temperatures)
    //     total += temp;
    
    // if (temperatures.size() != 0)
    //     average_temp = total / temperatures.size();
    
    // cout << fixed << setprecision(1);
    // cout << "Average temperature is " << average_temp << endl;

    // for (auto val: {1, 2, 3, 4, 5}) // this directly puts into initialiser list
    //     cout << val << endl;

    // for (auto c: "This is a test")
    //     if (c != ' ')
    //         cout << c; // this should print the string out without the spaces

    for (auto c: "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c; // replaced spaces with tabs
    cout << endl;
    return 0;
}