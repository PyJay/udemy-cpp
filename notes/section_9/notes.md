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
