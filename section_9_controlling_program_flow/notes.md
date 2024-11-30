# Controlling Program Flow

* Sequence
  * Ordering statements sequentially
* Selection
  * Making decisions
* Iteration
  * Looping or repeating
  
With sequence, selection and iteration we can implement any algorithm.

## Selection - Decision Making

* `if` statement
* `if-else` statement
* Nested `if` statement
* `switch` statement
* Conditional operator `?:` - this is an if else statement wrapeed in an operator

## Iteration - looping

* `for` loop
* Range based `for` loop
* `while` loop
* `do-while` loop
* `continue` and `break`
* Infinite `loops`
* Nested `loops` - great for working with multi dimensional structures

## if statement

```cpp
if (expr)
  statement;
```

* If the expression is true then execute the statement
* If the expression is fake then skip the statement

### Block statement

```cpp
{
    // variable declarations
    statement1;
    statement2;
}
```

* Create a block of code by including more than one statement in code block {}
* Blocks can also contain variable declarations
* These variables are visible only within the block - local scope

## The switch statement

```cpp
switch (integer_control_expr) {
  case expression_1: statement_1; break;
  case expression_2: statement_2; break;
  ...
  case expression_n: statement_n; break;
  default: statement_default;
}
```

* break statements are optional but recommended (as best practice)
* the default case is similar to the catch-all `else` statement in if else
* You can have multiple statements in the "statement" section in above examples, curly braces not required unless defining variables.

```cpp
switch (selection) {
  case '1': cout << "1 selected";
            break;
  case '2': cout << "2 selected";
            break;
  case '3': 
  case '4': cout << "3 or 4 selected";
            break;
  default: cout << "1,2,3,4 NOT selected";
}
```

* in the case of 3 and 4 we're doing something like an "or"

### Fall through examples

```cpp
switch (selection) {
  case '1': cout << "1 selected";
  case '2': cout << "2 selected";
  case '3': cout << "3 selected"
  case '4': cout << "4 selected";
            break;
  default: cout << "1,2,3,4 NOT selected";
}
```

* If you this and select 1 then 1 and all the below statements will run as well. This is because the `break`s are missing.

* If you intend to have fall through logic, please document clearly.

### Enumeration example

```cpp
enum Color {
  red, green, blue
};
Color screen_color {green};

switch (screen_color) {
  case red: cout << "red"; break;
  case green: cout << "green"; break;
  case blue: cout << "blue"; break;
  default: cout << "should never execute"; break;
}
```

### Switch statement summary

* The control expression must evaluate to an integer type
* The case expressions must be constant expressions that evaluate to integer or integers literals
* Once a match occurs all following case sections are executed UNTIL a `break` is reached.

* Best practice - provide break statment for each case.
* Best practice - `default` is optional, but should be handled.


### Conditional Operator
?:

`(cond_expr) ? expr1: expr2`

* cond_expr evaluates to a boolean expression
  * If cond_expr is true then the value of expr1 is returned
  * If cond_expr is false then the value of expr2 is returned
* Similar to if-else construct
* Ternary operator
* Very useful when used inline
* Very easy to abuse! Best practice: don't nest conditions inside the operator.

### Looping
iteration

* The third basic building block of programming
  * sequence, selection, *iteration*
* Iteration or repetition
* Allows the execution of a statement or block of statements repeatedly
* Loops are made up of a loop condition and the body which contains the statements to repeat.

Some typical use cases

Execute a loop:
* A specific number of times
* For each element in a collection
* While a specific condition remains true
* until we reach the end of some input stream
* forever
* etc

### C++ Looping Constructs
* `for` loop
  * Iterate a specific number of times

* `Range-based for` loop
  * one iteration for each element in a range or collection

* `while` loop
  * iterate while a condition remains true
  * stop when the condition becomes false
  * _check the condition at the beginning of every iteration_

* `do-while` loop
  * iterate while a condition remains true
  * stop when the cnodition becomes false
  * _check the condition at the end of every iteration_


## Range-based for loop
```cpp
int scores [] {100, 90, 97};

for (int score: scores)
  cout << score << endl;
```
output:
100
90
97

* you can use the `auto` keyword instead of specifying a type (e.g. `int` in above example)
* 
