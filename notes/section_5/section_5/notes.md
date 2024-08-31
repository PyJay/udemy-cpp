 
## keywords
   * they are reserved - this means they are not available for re-definition or overloading
   * C++ has 90, java has 50, c has 32, python has 33
     * C++ has a lot of them!
 * in the section 4 challenge 
   * keywords e.g. int, return etc
   * we also had identifiers
   * operators including stream insertion, stream extraction, double colon
   * punctuation e.g. curly braces, semi colon
   * All of this makes up the syntax of the program

## pre processor, pre-processor directives
   * a program, that procesess your source code before compiler sees it
   * strips out all comments, then processes all the preprocess directives
   * directives start with #
   * most common is include
     * it includes the file that the directive is and the processes that file
   * The preprocesser does not understand cpp, compiler does
  

## comments
  * comments never make it to the compiler (it's meant to be human readable)
  * single line comment `// This is a comment`
  * multiline comment
    ```cpp
    /* This ia a
     multi line comment
    */

    /***************************
    Comment block!
    author: Frank etc
    ****************************/
    ```
    
## The main() function
* Every cpp program must have exactly 1 main() func
* starting point of program execution
* return 0 indicates successful program execution
* 2 versions that are both valid

```cpp
int main()
{
  // code
  return 0;
}
```
`program.exe`

```cpp
int main(int argc, char *argv[])
{
  // code
  return 0;
}
```
`program.exe argument1 argument2`

## Namespaces
* Why `std::cout` and not just `cout`?
* Name spaces are used to reduce the possibility of naming conflicts
* `std` is the name for the c++ standard namespace
* Scope resolution operator `:`
  

```cpp
#include <iostream>

int main(){
  std::cout << "Enter your favourite number between 1 and 100: ";
}
```

### Using namespace

```cpp
#include <iostream>

using namespace std; // Use the entire std namespace

int main()
{
  int favorite_number;
  cout << "Enter your favorite number between 1 and 100: ";
  return 0;
}

```

### Qualified using namespace variant
* You can tell the compiler exactly the names we want to use from a namespace

```cpp
#include <iostream>

using std::cout; // use only what you need
using std::cin;
using std::endl;

```

### Section summary
* Two forward slash characters are used to indicate a comment
* A statement that begins with the # symbol is called a preprocessor directive
* three_stooges is a valid identifier name
* ; is used to terminate a statement in c++
* Compiler error if you use a C++ keyword as an identifier name
* Every complete C++ program must have a `main` function
* 