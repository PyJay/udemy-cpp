## Arrays
### What is an array?
* Compound data type or data structure
  * Collection of elements
  * All elems are of the same type
  * Each elem can be accessed directly

* Characteristics
  * Fixed size (unlike a Python list) - to change the size, change the maxsize in the source code and recompile
  * Elements are all of the same type
  * Stored contiguously in memory - memory will be calculated in one chunk
  * Individual elements can be accessed by their position or index (zero based index)
  * First elem is at index 0
  * Last elem is at index size - 1
  * No checking to see if you are out of bounds
  * Always initialize arrays
  * Very efficient
  * Iteration (lopping) is often used to process


### Declaring
   `Element_Type array_name [constant number of elements]`

   ```cpp
   int test_scores[5];
   int high_score_per_level [10];
   const int days_in_year {365};
   double hi_temperatures[days_in_year]{0};
   int another_array [] {1,2,3,4,5};
   ```

## Initialization
   `Element_Type array_name [constant number of elements] {init list}`
   
   ```cpp
   int test_scores[5] {100, 95, 99, 87, };
   int high_score_per_level [10] {3, 5};
   const int days_in_year {365}
   double hi_temperatures[days_in_year] {0}
   int another_array [] {1,2,3,4,5};
   ```

## Accesing array elements
  `array_name [element_index]`

### How does it work?
* The name of the array represents the location of the first element in the array (index 0)
* The [index] represents the offset from the beginning of the array
* C++ simple performs a calculation to find the correct element
* Remember - no bounds checking! Compiler will gladly do the calc and give you something outside of the array.
  

## Multi-dimensional arrays
Element_Type array_name [dim1_size] [dim2_size]
```cpp
int movie_rating [3][4];
```
Accessing array elements in multi-dim arrays
```cpp
cin >> movie_rating [1] [2];
cout << movie_rating [1] [2];
```

Initializing multi-dimensional arrays
```cpp
int movie_rating [3] [4]
{
  {0, 4, 3, 5};
  {2 ,3, 3, 5},
  {1, 4, 4, 5}
};
```

* We rarely use C++ arrays in modern C++, instead we use C++ vectors


## Vectors
* Suppose we want to store test scores for my school
* I have no way of knowing how many students will register next year
* Options:
  * Pick a size that you are not likely to exceed and use static arrays
  * Use a dynamic array such as a vector

**What is a vector?**
* Container in the **C++ Standard Template Library**
* An array that can grow and shrink in size at execution time
* Provides similar semantics and syntax as arrays
* Very efficient
* Can provide bounds checking
* Can use lots of cool functions like sort, reverse, find and more.

### Vectors
Declaring

```cpp
#include <vector>
using namespace std;

vector <char> vowels;
vector <int> test_scores;
```

```cpp
#include <vector>
using namespace std;

// using construction information inside parantheses (not using intialization list, using constructor initialization)
vector <char> vowels (5);
vector <int> test_scores (10);
```

```cpp
#include <vector>
using namespace std;
d
// intialization list)
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
vector <int> test_scores {100, 98, 89, 85, 93};
vector <double> hi_temperatures (365, 80.0);
```

### Characteristics
* Dynamic size
* Elements are all the same type
* Stored contiguously in memory
* Individual elements can be accessed by their position or index

* First element is at index 0
* Last element is at index size-1

* [] - no checking to see if you are out of bounds
* Provides many useful function that do bound check

* Elements initialized to zero
* Very efficient
* Iteration (looping) is often used to process

### Accessing vector elements

vector_name.at(elements_index)

```cpp
test_scores.at(1)
```

```cpp
// vector_name.push_back(element)

vector <int> test_scores {100, 95, 99} // size is 3

test_scores.push_back(80); // 100, 95, 99, 80
test_scores.push_back(90); // 100, 95, 99, 80, 90
```
Vector wil automatically allocate the required space!

__out of bounds__

* arrays never do bounds checking
* many vector methods provide bounds checking
* Ane exception and error message is generated
  
```cpp
vector <int> test_scores {100, 95};
cin >> test_scores.at(5);

// terminate called after throwing an instance of `std::out_of_range`

```



  