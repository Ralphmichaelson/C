# Variables and Data Types in C

This topic introduces **variables and data types in C**.

Variables allow a program to store information in memory, while data types determine what kind of information can be stored.

The `main.c` file demonstrates integers, floating-point numbers, characters, constants, assignment, format specifiers, and `sizeof`.

---

# What Is a Variable?

A variable is a named location used to store a value while a program is running.

For example:

```c
int age = 20;
```

This creates a variable called `age` and gives it the value `20`.

A variable can usually be changed during program execution:

```c
age = 21;
```

---

# Declaring a Variable

The general syntax is:

```c
data_type variable_name;
```

Example:

```c
int age;
```

Here:

```text
int
│
└── Data type

age
│
└── Variable name
```

The variable has been declared, but it has not yet been given a value.

---

# Initializing a Variable

Initialization means giving a variable its first value when it is declared.

```c
int age = 20;
```

Here:

* `int` is the data type.
* `age` is the variable name.
* `20` is the initial value.

---

# Assignment

A variable can be given a new value after it has been declared.

```c
age = 21;
```

This replaces the previous value with `21`.

Example:

```c
int age = 20;

age = 21;
```

The final value of `age` is `21`.

---

# Basic C Data Types

C provides several fundamental data types.

The main types introduced in this topic are:

```text
int
float
double
char
```

---

# 1. `int`

`int` is used for whole numbers.

Examples:

```c
int age = 20;
int students = 100;
int score = 85;
```

These values do not contain fractional parts.

Examples of valid integers:

```text
0
10
-5
1000
```

---

# 2. `float`

`float` is used for numbers that can contain a fractional part.

Example:

```c
float height = 1.75f;
```

The `f` suffix indicates that `1.75` is a `float` literal.

Other examples:

```c
float temperature = 24.5f;
float price = 199.99f;
```

---

# 3. `double`

`double` is also used for floating-point numbers.

Example:

```c
double balance = 12500.50;
```

A `double` typically provides greater precision than a `float`.

For example:

```c
double average = 78.625;
```

The exact precision and size are determined by the C implementation, but `double` is generally used when more precision is needed than `float` provides.

---

# 4. `char`

`char` is used to store a single character.

Example:

```c
char grade = 'A';
```

Character values use **single quotes**:

```c
'A'
'B'
'7'
'@'
```

This is different from a string, which uses double quotes:

```c
"Hello"
```

---

# Variable Examples from `main.c`

The program contains:

```c
int age = 20;

float height = 1.75f;

double balance = 12500.50;

char grade = 'A';
```

These demonstrate four different data types.

| Data Type | Example    | Used For                                     |
| --------- | ---------- | -------------------------------------------- |
| `int`     | `20`       | Whole numbers                                |
| `float`   | `1.75f`    | Floating-point values                        |
| `double`  | `12500.50` | Floating-point values with greater precision |
| `char`    | `'A'`      | A single character                           |

---

# Constants

A constant is a value that should not be changed after initialization.

The program contains:

```c
const int days_in_week = 7;
```

The keyword:

```c
const
```

indicates that the object should not be modified through that variable after initialization.

For example, this is not allowed:

```c
days_in_week = 8;
```

A constant is useful when a value should remain fixed throughout the program.

Examples:

```c
const int days_in_week = 7;
const float pi = 3.14159f;
```

---

# Variable Naming Rules

C identifiers, including variable names, follow rules.

Valid examples:

```c
age
student_count
totalMarks
price2
```

Common rules include:

* A name can contain letters, digits, and underscores.
* A name must not begin with a digit.
* Spaces are not allowed.
* C keywords cannot be used as variable names.
* C is case-sensitive.

Examples:

```c
student
Student
STUDENT
```

These are different identifiers.

---

# Invalid Variable Names

Examples of invalid names include:

```c
2age
student name
float
```

Why?

```text
2age
└── Cannot begin with a digit

student name
└── Contains a space

float
└── Reserved keyword
```

Use meaningful names instead:

```c
int student_age;
float product_price;
```

---

# Format Specifiers

When using `printf()`, the format specifier tells the function what type of value is being displayed.

Examples:

```c
printf("%d", age);
printf("%f", height);
printf("%c", grade);
```

Common format specifiers include:

| Specifier | Common Use                                         |
| --------- | -------------------------------------------------- |
| `%d`      | `int`                                              |
| `%f`      | `float`                                            |
| `%f`      | `double` when passed to `printf`                   |
| `%c`      | `char`                                             |
| `%zu`     | `size_t` values such as those returned by `sizeof` |

---

# Formatting Decimal Values

The program uses:

```c
printf("Height: %.2f meters\n", height);
```

The:

```text
.2
```

means that two digits should be displayed after the decimal point.

For example:

```text
1.75
```

A similar format is used for the balance:

```c
printf("Balance: %.2f\n", balance);
```

---

# The `sizeof` Operator

The `sizeof` operator determines the size, in bytes, of a type or object.

Examples:

```c
sizeof(int)
sizeof(float)
sizeof(double)
sizeof(char)
```

The program uses:

```c
printf("Size of int: %zu bytes\n", sizeof(int));
```

The result can vary depending on the compiler and platform.

For example, a common implementation may produce values such as:

```text
int      → 4 bytes
float    → 4 bytes
double   → 8 bytes
char     → 1 byte
```

These sizes should not be assumed to be identical on every C implementation.

---

# Why Does `sizeof(char)` Return 1?

The C language defines the size of `char` as exactly **one byte**.

However, the size of a C byte is implementation-defined, so one byte is not necessarily eight bits on every possible system.

---

# Assignment vs Initialization

These concepts are related but different.

### Initialization

Giving a variable its first value when it is declared:

```c
int age = 20;
```

### Assignment

Changing or giving a value to an already declared variable:

```c
age = 21;
```

Example:

```c
int age;

age = 20;
```

Here the variable is declared first and assigned a value afterward.

---

# Changing Variables

Variables can store different values during program execution.

Example:

```c
int age = 20;

printf("%d\n", age);

age = 21;

printf("%d\n", age);
```

Output:

```text
20
21
```

This demonstrates that ordinary variables are mutable.

---

# C Is Statically Typed

C is a **statically typed language**.

This means that a variable has a declared type.

Example:

```c
int age = 20;
```

The variable `age` is an `int`.

Another example:

```c
float height = 1.75f;
```

The variable `height` is a `float`.

The declared type tells the compiler how the value should be interpreted and what operations are appropriate.

---

# Type Conversion

Sometimes a value needs to be converted from one type to another.

For example:

```c
int number = 10;
double result = number;
```

The integer value can be converted to a `double` when assigned.

Explicit conversion can also be written using a cast:

```c
double result = (double) number;
```

Type conversion becomes especially important when performing calculations involving different data types.

---

# Character Values and Character Codes

A `char` stores a single character value.

For example:

```c
char grade = 'A';
```

Characters are represented internally using numeric character codes.

You can therefore also encounter code such as:

```c
char letter = 'A';
```

and use it in contexts where its integer representation matters.

The exact character set used by an implementation follows the rules of the C environment; ASCII is very common.

---

# Escape Sequences

A backslash introduces special character sequences.

For example:

```c
\n
```

represents a newline.

The program uses:

```c
printf("Age: %d\n", age);
```

Other common escape sequences include:

| Escape Sequence | Meaning        |
| --------------- | -------------- |
| `\n`            | New line       |
| `\t`            | Horizontal tab |
| `\\`            | Backslash      |
| `\"`            | Double quote   |
| `\'`            | Single quote   |

---

# The Variables in `main.c`

The program contains:

```c
int age = 20;
float height = 1.75f;
double balance = 12500.50;
char grade = 'A';
const int days_in_week = 7;
```

These demonstrate:

```text
int     → whole numbers
float   → decimal values
double  → decimal values with greater precision
char    → single characters
const   → values intended not to be modified
```

The program then displays the values using `printf()`.

---

# Program Flow

The program can be understood as:

```text
Program starts
      ↓
Create variables
      ↓
Store different types of values
      ↓
Display the values
      ↓
Change age from 20 to 21
      ↓
Display updated age
      ↓
Display sizes using sizeof
      ↓
return 0
      ↓
Program ends
```

---

# Common Mistakes

## 1. Using Double Quotes for a `char`

Incorrect:

```c
char grade = "A";
```

Correct:

```c
char grade = 'A';
```

A character uses single quotes.

---

## 2. Forgetting the `f` Suffix for a Float Literal

A float can be written explicitly as:

```c
float height = 1.75f;
```

Without the `f`, `1.75` is a `double` floating-point constant and is converted to `float` when assigned.

Using `f` makes the intended literal type explicit.

---

## 3. Using the Wrong Format Specifier

Example:

```c
int age = 20;

printf("%c", age);
```

The format specifier does not match the intended type.

A matching example is:

```c
printf("%d", age);
```

---

## 4. Trying to Change a `const` Variable

```c
const int days_in_week = 7;

days_in_week = 8;
```

This attempts to modify an object declared as `const` and should produce a compilation diagnostic.

---

## 5. Giving Variables Confusing Names

Poor:

```c
int x;
int y;
```

when the variables represent important concepts.

Better:

```c
int student_age;
int exam_score;
```

Meaningful names make programs easier to understand.

---

## 6. Assuming All Data Types Have the Same Size Everywhere

Do not assume:

```text
int = 4 bytes
double = 8 bytes
```

on every possible C implementation.

Use `sizeof` when the actual size matters.

---

# What I Practiced

In `main.c`, I practiced:

* Declaring variables.
* Initializing variables.
* Assigning new values.
* Using `int`.
* Using `float`.
* Using `double`.
* Using `char`.
* Creating constants with `const`.
* Displaying variables with `printf()`.
* Using format specifiers.
* Formatting decimal output with `%.2f`.
* Using the `sizeof` operator.
* Understanding variable naming rules.
* Changing a variable during program execution.

---

# Practice Tasks

Modify `main.c` to practice:

1. Creating a variable for your age.
2. Creating a variable for your university.
3. Creating a variable for your course.
4. Creating a `float` for a product price.
5. Creating a `double` for a larger numerical value.
6. Creating a `char` for a grade.
7. Creating a constant for the number of months in a year.
8. Printing the size of additional types.
9. Changing an ordinary variable after initialization.
10. Experimenting with different `printf()` format specifiers.

Example:

```c
int score = 85;
float price = 499.50f;
char grade = 'A';

printf("Score: %d\n", score);
printf("Price: %.2f\n", price);
printf("Grade: %c\n", grade);
```

---

# Quick Reference

```c
int age = 20;

float height = 1.75f;

double balance = 12500.50;

char grade = 'A';

const int days_in_week = 7;
```

Printing:

```c
printf("%d\n", age);
printf("%.2f\n", height);
printf("%.2f\n", balance);
printf("%c\n", grade);
```

Checking size:

```c
printf("%zu\n", sizeof(int));
printf("%zu\n", sizeof(float));
printf("%zu\n", sizeof(double));
printf("%zu\n", sizeof(char));
```

---

# Key Takeaways

* Variables store values used by a program.
* Every variable has a type.
* `int` is commonly used for whole numbers.
* `float` and `double` are used for floating-point values.
* `double` generally provides greater precision than `float`.
* `char` stores a single character.
* `const` is used for objects that should not be modified through that variable.
* Initialization gives a variable its first value.
* Assignment gives or changes a value after declaration.
* Format specifiers tell `printf()` how to interpret values.
* `sizeof` tells you the size in bytes of a type or object.
* Type sizes can depend on the C implementation.
* Meaningful variable names make code easier to understand.
* C is statically typed and case-sensitive.

---

# Folder Contents

```text
02-variables-and-data-types/
├── main.c
└── README.md
```

## Learning Progress

This is the second topic in my C programming learning section.

It builds on the basic C program structure introduced in **01 — Introduction to C** and provides the foundation for working with user input, operators, calculations, conditions, and loops in later topics.
