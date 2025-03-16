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

## What is a function part 2?

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

## Defining functions

* name
  * the name of the function
  * same rules as for variables
  * should be meaningful
  * usually a verb or verb phrase

* parameter list
  * the variables passed into the function
  * their types must be specified

* return type
  * the type of the data that is returned from the function

* body
  * the statements that are executed when the function is called
  * in curly braces `{}`

* Example with multiple parameters

```cpp
void function_name(int a, std::string b)
{
  statement(s);
  return; //optional
}
```

## Calling functions

* Functions can call other functions
* Compiler must know the function details **BEFORE** it is called!
  * define funcs before calling them
    * OK for small programs
    * Not a practical solution for larger programs

## Function protypes

* Use function prototypes
  * Tells the compiler what it needs to know without a full func def
  * Also called forward declarations
  * Placed at the beginning of the program
  * Also used in our own header files (.h) - more about this later

```cpp
int function_name(); // prototype

int function_name()
{
  statements(s);
  return 0;
}
```
* you can have as many prototypes as you need (one per function) 
* the order doesn't matter
  
```cpp
int function_name(int); // prototype
                        // or
int function_name(int a); // prototype

int function_name(int a){
  statement(s);
  return 0;
}
```
* the prototype doesn't care about the param name, just the type.

```cpp
void function_name(int a, std::string b); //or
void function_name(int, std::string);

void function_name(int a, std::string b)
{
  statements(s);
  return ; // optional
}

```
* the prototypes usually go in `.h` files (header files)

* When we call a func, we can pass in data to that func
* in the func call they are called arguments
* in the func def they are called params
* they must match in number, order and in type

```cpp
int add_numbers(int, int); // prototype

int main() {
  int result {0};
  result = add_numbers(100, 200); // call
  return 0;
}

int add_numbers(int a, int b){ // definition
  return a + b;
}
```
```cpp
void say_hello(std::string name){
  cout << "Hello " << name << endl;
}

say_hello("Frank"); // note this is a c-style string, but compiler knows to convert it to std::string (similar to int passed where float expected)

std::string my_dog("Buster");
say_hello(my_dog);
```

## Function parameters

### Pass by value
* When you pass data into a function it is **passed-by-value**
* A copy of the data is passed to the function
* Whatever changes you make to the param in the func does NOT affect the arg that was passed in.
* *Disadvantage: copies can be expensive*

* Formal vs. Actual parameters
  * Formal params - params defined in the function header
  * Actual params - the params used in the function call, the args

* The actual params are copied to the formal parameters

```cpp
void param_test(int formal) { // formal is a copy of actual
  cout << formal << endl;     // 50
  formal = 100;               // only changes the local copy
  cout << formal << endl;     // 100
}

int main(){
  int actual {50};
  cout << actual << endl; //50
  param_test(actual); // pass in 50 to param_test
  cout << actual << endl; // 50 - did not change
  return 0;
}
```

### Default arguments
* they must be in the tail end of the function signature
* They are defaulted in the function prototype
```cpp
double calc_cost(double base_cost, double tax_rate=0.06);
```
* if one argument is defaulted, all following args are also defaulted

### Function Overloading
* We can have funcs that have different param lists that have the same name
* Abstraction mechanism since we can just think `print` for example
* A type of **polymorphism**
  * We can have the same name work with different data types to execute similar behaviour
* The compiler must be able to tell the functions apart based on the param list and argument supplied
* Return type is not considered by compiler when considering overloaded functions
```cpp
int get_value();
double get_value();

// Error

cout << get_value() << endl; // which one?
```
* be careful when setting default params on overloaded functions. If more than one signatures with defaults, compiler error as not sure which to choose

## Passing Arrays To Functions
* We can pass an array to a func by providing square brackets in the formal param descriptions
`void print_array(int numbers []);`
* The array elements are NOT copied
* Since the array name evals to the location of the array in memory - __this address is what is copied__
* Func doesn't know how many elems in the array since all it knows is the location of the first elem.
* So for the above func the size would also need to be passed to the func
* Since we are passing the loc of the array; the func can modify the actual array
* use `const` (readonly) to prevent this#
* location vs value (pass by ref)

## Pass by Reference
* Sometimes we want to be able to change the actual param from within the func body
* In order to achieve this we need the location or address of the actual param
* We saw how this is the effect with array, but what about other var types?
* We can use reference params to tell the compiler to pass in a reference to the actual param
* The formal param will now be an alias for the actual param

```cpp
void scale_number(int &num); // prototype

int main() {
  int number {1000};
  scale_number(number);      // call
  cout << number << endl;    // 100
  return 0;
}

void scale_number(int &num) {// definition
  if (num > 100)
    num = 100;
}
```