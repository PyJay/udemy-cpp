#include <iostream>

using namespace std;

int main(){
char select;
do {
    cout << endl << "-------------------" << endl;
    cout << "1. Do this" << endl;
    cout << "2. Do that" << endl;
    cout << "3. Do something else" << endl;
    cout << "Q: Quit" << endl << endl;
    cout << "Enter your selection: " << endl;
    cin >> select;
    switch (select){
        case '1': cout << "Do this"; break;
        case '2': cout << "Do that"; break;
        case '3': cout << "Do something else"; break;
        case 'Q':
        case 'q': break;
        default: cout << "Invalid selection" << endl;
    }
}
while (select != 'Q' && select != 'q');
cout << "Quitting";
}