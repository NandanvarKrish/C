/*
Priority Operators
1st * / %
2nd + -
3rd =
*/

/*
When operators of equal priority are present in an expression, the tie is taken care of by
associativity.
x*y/z → (x*y)/z
x/y*z → (x/y)*z
*, / follows left to right associativity
Pro Tip: Always use parenthesis in case of confusion
*/

// TYPES OF OPERATORS

/*
RELATIONAL OPERATORS IN C

Relational operators are used to evaluate conditions (true or false) inside the if
statements.

Some examples of relational operators are:
==, >=, >, <, <=, !=

* Important note: ‘=’ is used for assignment, whereas ‘==’ is used for equality check.

The condition can be any valid expression. In C a non-zero value is considered to be
true.
*/

/*
LOGICAL OPERATORS

&&, || and !, are three logical operators in C. These are read as “AND”, “OR” and “NOT”

They are used to provide logic to our C programs.
*/

/*
USAGE OF LOGICAL OPERATORS:

1. && (AND) → is true when both the conditions are true
a. “1 and 0” is evaluated as false.
b. “0 and 0” is evaluated as false.
c. “1 and 1” is evaluated as true.

2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1)

3. ! (NOT) → returns true if given false and false if given true
a. !(3==3) → evaluates to false
b. !(3>30) → evaluates to true.

As the number of conditions increases, the level of indentation increases. This reduces readability. Logical operators come to rescue in such cases.
*/