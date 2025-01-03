# Functions

## Section Overview
* Function
  * definition
  * prototype - make funcs useful anywhere in code
  * Parameters and pass-by-value - how params work
  * `return` statement
  * default parameter values - setting defaults for params
  * overloading
  * passing arrays to function
  * pass-by-reference - pass info to a function efficiently (by avoiding copying). How to change passed info, as well as protecting it from change
  * `inline` functions - funcs that compiler optimizes to avoid overhead involved when calling funcs
  * `auto` return type - compiler can deduce the function return value
  * recursive functions - funcs that call themselves

## What is a function?
* C++ programs
* C++ Standard Libraries (funcs and classes)
* Third-party libraries (funcs and classes) 
* Our own funcs and classes

* Functions allow the modularization of a program
  * Separate code into logical self contained units
  * These units can be reused

* Instead of
```cpp
int main() {
  // read input
    statement1;
    ...
    statement4;
  
  // process input
    statement5;
    statement6;
    statement7;

  // provide output
    statement8;
    statement9;
    statement10;

    return 0;
}
```
* We write modularized code
```cpp
int main() {
  // read input
  read_input();
  
  // process input
  process_input();

  // provide output
  provide_output();

  return 0;
}
```
* more modular, more readable, more maintainable, easier to debug, easier to reuse.

## What is a function?
* allows abstraction
Boss/Worker analogy
* Write your code to the function specification
* understand what the function does
* Understand what information the function needs
* Understand what the function returns
* Understand any errors the function may produce
* Understand any performance constraints

* Don't worry about HOW the function works internally (information hiding)
  * Unless you are the one writing the function!

* Example `<cmath>`
* Common mathematical calculations
* Global functions called as:
```cpp
function_name(argument);
function_name(argument1, argument2, ...);

cout << sqrt(400.0) << endl; // 20.0
double result;
result = pow(2.0, 3.0); // 2.0^3.0
```

* CPP Reference, standard header files - this becomes next learning experience of cpp language, then it's a matter of learning what's out there and available to you.
* cmath standard library header
* cstdlib, misc algos and math e.g. rand, srand

* Random numbers
  * computers are really bad with random numbers
  * We have what we call "pseudo-random numbers"
    * numbers themselves are random
    * but sequence they are created in is not.
  * to create more random numbers seed the random num generator with different seed each time