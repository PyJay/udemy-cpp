# Section 8

## Increment and decrement operators

* Increment operator ++
* Decrement operator --

* Increments or decrements its operand by 1
* Can be used with integers, floating point types and pointers

* Prefix   ++num
* Postfix      num++

* Don't overuse this operator!
* **ALERT!!!** Never use it twice for the same variable in the same statement!! Behaviour is undefined.

* Example 1 - simple increment
  * `counter++`

  * `++counter`

  * Has the same effect, the operand (counter) is incremented by 1.

* Example 2 - preincrement

```cpp
counter = 10;
result = 0;
cout << "Counter: " << counter << endl;
result = ++counter; // Note the pre increment
cout << "Counter:" << counter << endl; // counter will be 11
cout << "Result:" << result << endl; // result will be 11
```

## Mixed Type Expressions

## Conversions

* Higher vs Lower types
  * long double is higher than long, long is higher than int
  * we can convert from higher to lower automatically

* Type Cooercion: conversion of one operation to another data type

* Promotion: conversion to a higher type
  * Used in mathematical expressions

* Demotion: conversion to a lower type
  * Used with assignment to lower type

* lower op higher, the lower is promoted to a higher

```cpp
   2 * 5.2
   2 is promoted to 2.0
```

* lower = higher; the higher is demoted to a lower

```cpp
    int num {0};
    num = 100.2;
```

* Explicit type casting - `static_cast<type>`

## Testing for Equality

The == and != operators.

```cpp
bool result {false};
result = (100 == 50 + 50);
result = (num1 != num2);

cout << (num == num2) << endl; // 0 or 1
cout << std::boolalpha; // This will convert the 0/1 to true/false from here on when outputted to the stream
cout << (num1 == num2) << endl; // true or false
cout << std::noboolalpha; // This will convert the bools back to 0/1 from here on
```

```text
Enter two doubles separated by a space: 12.0 11.99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999 
Comparision result (equals) : true     
Comparision result (not equals) : false
```

This may be surprising that the two floats are equal but this is due the computer representation of the numbers.

## Relational Operators

```txt
> greater than
>= greater than or equal to
< less than
<= less than or equal to
<=> three-way comparison (C++20)
```

## Logical Operators

| Operator   | Meaning     |
|---         | ---         |
| not / !    | negation    |
| and / &&   | logical and |
| or / \|\|  | logical or  |

### Precedence

* `not` has higher precedence than `and`
* `and` has higher precedence than `or`
* `not` is a unary operator
* `and` and `or` are binary operators

### Short circuit evaluation

* When evaluating a logical expression C++ stops as soon as the result is known

```cpp
expr1 && expr2 && expr3 // if expr1 false, then no need to evaluate others
expr1 || expr2 || expr3 // if any of the exprs are true, then all is true
```

## Compound Assignment Operators

`+=` `/-` `*=` `-=`

## Operator Precedence

`()` is on the top row, `=` is on the bottom row

What is associativity?

* Use precedence rules when adjacent operators are different
  
  `expr1 op1 expr2 op2 expr3 // precedence`

* Use associativy rules when adjacent operators have the same precedence

`expr1 op1 expr2 op1 expr3 // associativity`

## Quiz

* The prefix increment operator means, increment first then return the incremented value
* `==` is the operator that checks for equality
* The operator that represents logical AND is `&&`
* The operator that represents logical OR is `||`
* `a < 10` is called a relational operator
