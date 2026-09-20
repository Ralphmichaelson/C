# Operators in C

This topic introduces **operators in C**.

Operators are symbols used to perform operations on values and variables.

The `main.c` file demonstrates:

* Arithmetic operators
* Assignment operators
* Relational operators
* Logical operators
* Increment and decrement operators
* Operator precedence
* Parentheses

---

# What Is an Operator?

An operator is a symbol that tells the program to perform an operation.

For example:

```c
sum=a+b;
```

The `+` operator adds `a` and `b`.

If:

```c
a=20;
b=6;
```

then:

```text
sum = 26
```

---

# 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

The main arithmetic operators are:

| Operator | Meaning        |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |
| `%`      | Remainder      |

---

## Addition `+`

```c
sum=a+b;
```

If:

```text
a = 20
b = 6
```

then:

```text
sum = 26
```

---

## Subtraction `-`

```c
difference=a-b;
```

Result:

```text
20 - 6 = 14
```

---

## Multiplication `*`

```c
product=a*b;
```

Result:

```text
20 * 6 = 120
```

---

## Division `/`

```c
quotient=a/b;
```

Since both `a` and `b` are integers:

```text
20 / 6 = 3
```

The decimal part is discarded in integer division.

---

## Modulus `%`

The `%` operator gives the remainder after division.

```c
remainder=a%b;
```

For:

```text
20 / 6
```

the remainder is:

```text
2
```

because:

```text
6 × 3 = 18
20 - 18 = 2
```

---

# 2. Assignment Operators

Assignment operators are used to assign or update values in variables.

The basic assignment operator is:

```c
=
```

Example:

```c
x=20;
```

This stores `20` in `x`.

---

## `+=`

```c
x+=5;
```

This is equivalent to:

```c
x=x+5;
```

If:

```text
x = 20
```

then:

```text
x += 5
```

results in:

```text
25
```

---

## `-=`

```c
x-=3;
```

This is equivalent to:

```c
x=x-3;
```

---

## `*=`

```c
x*=2;
```

This is equivalent to:

```c
x=x*2;
```

---

## `/=`

```c
x/=4;
```

This is equivalent to:

```c
x=x/4;
```

---

## `%=`

```c
x%=3;
```

This is equivalent to:

```c
x=x%3;
```

---

# Assignment Operator Summary

| Operator | Example | Equivalent |
| -------- | ------- | ---------- |
| `=`      | `x=5`   | Assign 5   |
| `+=`     | `x+=5`  | `x=x+5`    |
| `-=`     | `x-=5`  | `x=x-5`    |
| `*=`     | `x*=5`  | `x=x*5`    |
| `/=`     | `x/=5`  | `x=x/5`    |
| `%=`     | `x%=5`  | `x=x%5`    |

---

# 3. Relational Operators

Relational operators are used to compare two values.

The result of a comparison is commonly:

```text
1 → true
0 → false
```

The main relational operators are:

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

---

## Equal To `==`

```c
equal=a==b;
```

This checks whether `a` and `b` have the same value.

With:

```text
a = 20
b = 6
```

the result is:

```text
0
```

because they are not equal.

---

## Not Equal `!=`

```c
not_equal=a!=b;
```

Since `20` is not equal to `6`:

```text
1
```

is produced.

---

## Greater Than `>`

```c
greater=a>b;
```

Because:

```text
20 > 6
```

the result is:

```text
1
```

---

## Less Than `<`

```c
less=a<b;
```

Because:

```text
20 < 6
```

is false:

```text
0
```

is produced.

---

## Greater Than or Equal `>=`

```c
greater_equal=a>=b;
```

This checks whether `a` is greater than or equal to `b`.

---

## Less Than or Equal `<=`

```c
less_equal=a<=b;
```

This checks whether `a` is less than or equal to `b`.

---

# 4. Logical Operators

Logical operators are used to combine or modify conditions.

The three main logical operators are:

| Operator | Meaning |   |    |
| -------- | ------- | - | -- |
| `&&`     | AND     |   |    |
| `        |         | ` | OR |
| `!`      | NOT     |   |    |

---

# AND `&&`

The `&&` operator returns true only when both conditions are true.

Example:

```c
both_true=(a>10)&&(b<10);
```

With:

```text
a = 20
b = 6
```

both conditions are true:

```text
20 > 10   → true
6 < 10    → true
```

Therefore:

```text
both_true = 1
```

### AND truth table

| Condition 1 | Condition 2 | Result |
| ----------- | ----------- | ------ |
| False       | False       | False  |
| False       | True        | False  |
| True        | False       | False  |
| True        | True        | True   |

---

# OR `||`

The `||` operator returns true when **at least one** condition is true.

Example:

```c
either_true=(a>10)||(b>10);
```

Here:

```text
a > 10 → true
b > 10 → false
```

At least one condition is true, so the result is:

```text
1
```

### OR truth table

| Condition 1 | Condition 2 | Result |
| ----------- | ----------- | ------ |
| False       | False       | False  |
| False       | True        | True   |
| True        | False       | True   |
| True        | True        | True   |

---

# NOT `!`

The `!` operator reverses a logical result.

Example:

```c
not_true=!(a<10);
```

Since:

```text
a < 10
```

is false, applying `!` makes the result true.

Therefore:

```text
not_true = 1
```

---

# 5. Increment Operator `++`

The increment operator increases a value by 1.

Example:

```c
increment=10;
increment++;
```

The value changes from:

```text
10
```

to:

```text
11
```

The longer equivalent is:

```c
increment=increment+1;
```

---

# 6. Decrement Operator `--`

The decrement operator decreases a value by 1.

Example:

```c
decrement=10;
decrement--;
```

The value changes from:

```text
10
```

to:

```text
9
```

The longer equivalent is:

```c
decrement=decrement-1;
```

---

# 7. Operator Precedence

When an expression contains multiple operators, C follows rules that determine which operation is performed first.

For example:

```c
result1=2+3*4;
```

Multiplication is performed before addition.

Therefore:

```text
3 * 4 = 12
2 + 12 = 14
```

So:

```text
result1 = 14
```

---

# Using Parentheses

Parentheses can change the order of operations.

Example:

```c
result2=(2+3)*4;
```

First:

```text
2 + 3 = 5
```

Then:

```text
5 * 4 = 20
```

So:

```text
result2 = 20
```

---

# Operator Precedence Example

Compare:

```c
result1=2+3*4;
```

and:

```c
result2=(2+3)*4;
```

Results:

```text
2 + 3 * 4 = 14

(2 + 3) * 4 = 20
```

This demonstrates why parentheses are important when you want to make the order of operations clear.

---

# Common Mistakes

## 1. Confusing `=` and `==`

Assignment:

```c
x=10;
```

Comparison:

```c
x==10;
```

They have different purposes.

```text
=   → assignment
==  → comparison
```

---

## 2. Expecting Decimal Results from Integer Division

Example:

```c
int a=20;
int b=6;

int result;

result=a/b;
```

The result is:

```text
3
```

not:

```text
3.333...
```

because integer division produces an integer result.

---

## 3. Forgetting the Difference Between `%` and `%%`

In a calculation:

```c
remainder=a%b;
```

`%` is the modulus operator.

However, inside a `printf()` format string, `%` begins a format specifier. To display an actual percent sign, you use:

```c
%%
```

For example:

```c
printf("50%%");
```

displays:

```text
50%
```

---

## 4. Using `&` Instead of `&&`

These are different:

```text
&   → bitwise AND
&&  → logical AND
```

In this topic, we are using:

```c
(a>10)&&(b<10);
```

for logical AND.

---

## 5. Confusing `||` With `|`

These are different operators:

```text
|   → bitwise OR
||  → logical OR
```

Logical OR is:

```c
(a>10)||(b>10);
```

---

## 6. Forgetting Parentheses in Complex Expressions

An expression such as:

```c
a+b*c
```

does not perform the operations strictly from left to right.

Multiplication has higher precedence than addition.

When the intended order is important, use parentheses:

```c
(a+b)*c
```

---

# What I Practiced

In `main.c`, I practiced:

* Addition.
* Subtraction.
* Multiplication.
* Division.
* Modulus.
* Assignment.
* Compound assignment.
* Equality comparison.
* Inequality comparison.
* Greater-than comparison.
* Less-than comparison.
* Greater-than-or-equal comparison.
* Less-than-or-equal comparison.
* Logical AND.
* Logical OR.
* Logical NOT.
* Increment.
* Decrement.
* Operator precedence.
* Parentheses.

---

# Practice Tasks

Modify `main.c` and experiment with:

### 1. Change the values

Try:

```c
int a=15;
int b=4;
```

and observe the different results.

### 2. Try different arithmetic operations

Create your own variables and calculate:

```text
sum
difference
product
quotient
remainder
```

### 3. Practice comparisons

Try comparing:

```text
a==b
a!=b
a>b
a<b
a>=b
a<=b
```

### 4. Practice logical operators

Create expressions using:

```text
&&
||
!
```

### 5. Practice precedence

Compare:

```c
result1=10+2*5;
```

with:

```c
result2=(10+2)*5;
```

---

# Quick Reference

```text
Arithmetic
+   Addition
-   Subtraction
*   Multiplication
/   Division
%   Remainder

Assignment
=   +=   -=   *=   /=   %=

Relational
==   !=   >   <   >=   <=

Logical
&&   ||   !

Increment / Decrement
++   --

Grouping
()
```

---

# Key Takeaways

1. Operators allow programs to perform calculations and comparisons.
2. Arithmetic operators perform mathematical calculations.
3. Assignment operators store or update values.
4. Relational operators compare values.
5. Logical operators combine or reverse conditions.
6. `++` increases a value by one.
7. `--` decreases a value by one.
8. Integer division produces an integer result.
9. `%` gives the remainder of a division.
10. Operator precedence determines the order of operations.
11. Parentheses can be used to control or clarify the order of operations.
12. `=` and `==` have completely different meanings.

---

# Folder Contents

```text
04-operators/
├── main.c
└── README.md
```

## Learning Progress

This is the fourth topic in my C programming learning section.

It builds on variables and input/output by introducing the operators needed to perform calculations, compare values, and combine conditions.

The next topic will use these operators to make decisions using **conditional statements**.
