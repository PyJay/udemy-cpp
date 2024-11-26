# include <iostream>
# include <vector> //don't forget this in order to use vectors

using namespace std;

int main() {

// vector <char> vowels; // empty
// vector <char> vowels (5); // 5 initialized to zero
vector <char> vowels{'a', 'e', 'i', 'o', 'u'};

cout << vowels[0] << endl; // using the subscript notation does not do bound checking
cout << vowels[4] << endl;

// vector <int> test_scores(3); // 3 elements all initialized to zero
// vector <int> test_scores(3, 100); // 3 elements all initialized to zero

vector <int> test_scores {100, 98, 89};

cout << "\nTest scores using array syntax:" << endl;
cout << test_scores[0] << endl;
cout << test_scores[1] << endl;
cout << test_scores[2] << endl;

cout << "\nTest scores using vector syntax:" << endl;

cout << test_scores.at(0) << endl; // will do bounds checking
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

cout << "\nEnter 3 scores: ";
cin >> test_scores.at(0);
cin >> test_scores.at(1);
cin >> test_scores.at(2);

cout << "\nUpdated test scores: " << endl;

cout << test_scores.at(0) << endl;
cout << test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;

}