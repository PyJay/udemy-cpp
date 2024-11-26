#include <iostream>
using namespace std;

int test_scores[5] {100, 95, 99, 87, };
int high_score_per_level [10] {3, 5}; //init to 3,5 and remaining to 0
const int days_in_year {365};
double hi_temperatures[days_in_year] {0}; // int all to zero
int another_array [] {1,2,3,4,5};

int main() {
    cout << high_score_per_level[0] << endl;
    cout << high_score_per_level[1] << endl;
    cout << high_score_per_level[2] << endl;
    cout << high_score_per_level[3] << endl;
    cout << high_score_per_level[4] << endl;
    cout << high_score_per_level[5] << endl;
    cout << high_score_per_level[6] << endl;
    cout << high_score_per_level[7] << endl;
    cout << high_score_per_level[8] << endl;
    cout << high_score_per_level[9] << endl;
    cout << hi_temperatures[0] << endl;
    cout << hi_temperatures[364] << endl;
    cout << another_array[0] << endl;
    cout << another_array[1] << endl;
    cout << another_array[2] << endl;
    cout << another_array[3] << endl;
    cout << another_array[4] << endl;
    return 0;
}