// array

# include <iostream>

using namespace std;

int main() {

    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    // cin >> vowels[5]; out of bounds - don't do this!!

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7; // set the first element in hi_temps to 100.7
                         // we'll talk about assignment statement in an upcoming section
    
    cout << "The first "
}