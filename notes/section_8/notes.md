# Mixed Type Expressions

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
