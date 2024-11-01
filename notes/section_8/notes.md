## Section 8

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
