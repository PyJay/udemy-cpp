#include <iostream>
#include <vector>

using namespace std;

// multiplication table
void m_table(){
for (int num1{1}; num1 <=10; ++num1) {
  for (int num2{1}; num2 <= 10; ++num2) {
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;}   
   cout << "----------------" << endl;
  };
}

// 2d Arrays
void arrays(){
  int grid[5][3] {};
  // set all elems to 1000
  for (int row {0}; row < 5; ++row){
    for (int col {0}; col < 3; ++col)
    {
      grid[row][col] = 1000;
    }
  }
  // display the values
  for (int row {0}; row < 5; ++row){
    for (int col {0}; col < 3; ++col)
      {
        cout << grid[row][col] << " ";
      }
      cout << endl;
  }
}

// 2d vectors
void vectors(){
  vector<vector<int>> vector_2d  {
    // notice the different sizes
    {1, 2, 3},
    {10, 20, 30, 40},
    {100, 200, 300, 400, 500},
  };

  for (auto vec: vector_2d) {
    for (auto val: vec) {
      cout << val << " ";
    }
    cout << endl;
  }
}

int main(){
  vectors();
  return 0;
}

