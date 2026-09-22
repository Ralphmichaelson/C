# ⚠️ Common Mistakes in C

This README is a practical reference for common mistakes that can occur while learning and writing programs in C.

The mistakes are organized according to the major topics covered in the C learning section.

---

# 📚 Table of Contents

1. [Syntax Mistakes](#1-syntax-mistakes)
2. [Variables and Data Type Mistakes](#2-variables-and-data-type-mistakes)
3. [Input and Output Mistakes](#3-input-and-output-mistakes)
4. [Operator Mistakes](#4-operator-mistakes)
5. [Conditional Statement Mistakes](#5-conditional-statement-mistakes)
6. [Loop Mistakes](#6-loop-mistakes)
7. [Function Mistakes](#7-function-mistakes)
8. [Array Mistakes](#8-array-mistakes)
9. [String Mistakes](#9-string-mistakes)
10. [Pointer Mistakes](#10-pointer-mistakes)
11. [Structure, Union and Enumeration Mistakes](#11-structure-union-and-enumeration-mistakes)
12. [File Handling Mistakes](#12-file-handling-mistakes)
13. [General Programming Mistakes](#13-general-programming-mistakes)
14. [Quick Checklist](#14-quick-checklist)

---

# 1. Syntax Mistakes

Syntax mistakes happen when the rules of the C language are not followed.

## 1.1 Forgetting the Semicolon

❌ Incorrect:

```c
int age = 20
```

✅ Correct:

```c
int age = 20;
```

Most C statements end with a semicolon `;`.

---

## 1.2 Missing Braces

❌ Incorrect:

```c
if(age >= 18)
    printf("Adult\n";
```

✅ Correct:

```c
if(age >= 18)
{
    printf("Adult\n");
}
```

Braces `{ }` define blocks of code.

---

## 1.3 Incorrect Bracket Matching

Every opening bracket should have a corresponding closing bracket.

❌ Incorrect:

```c
main()
{
    printf("Hello\n");
```

✅ Correct:

```c
main()
{
    printf("Hello\n");
}
```

---

## 1.4 Misspelling Keywords

❌ Incorrect:

```c
whlie(i <= 10)
```

✅ Correct:

```c
while(i <= 10)
```

C keywords must be written correctly.

---

## 1.5 Incorrect Capitalization

C is case-sensitive.

These are different:

```c
age
Age
AGE
```

For example:

❌ Incorrect:

```c
Printf("Hello");
```

✅ Correct:

```c
printf("Hello");
```

---

# 2. Variables and Data Type Mistakes

## 2.1 Using a Variable Before Declaring It

❌ Incorrect:

```c
age = 20;

int age;
```

✅ Correct:

```c
int age;

age = 20;
```

A variable should be declared before it is used.

---

## 2.2 Using the Wrong Data Type

For example, using an integer when decimal values are required.

❌ Incorrect:

```c
int average;

average = 75.5;
```

A better choice is:

```c
float average;

average = 75.5;
```

Choose a data type that matches the kind of data being stored.

---

## 2.3 Assigning a Character Without Single Quotes

❌ Incorrect:

```c
char grade = A;
```

✅ Correct:

```c
char grade = 'A';
```

Character values are written using single quotes.

---

## 2.4 Confusing Assignment and Comparison

`=` means assignment.

`==` means comparison.

❌ Incorrect:

```c
if(age = 20)
```

✅ Correct:

```c
if(age == 20)
```

Remember:

```text
=   → assign
==  → compare
```

---

# 3. Input and Output Mistakes

## 3.1 Forgetting the Address Operator in `scanf()`

For ordinary variables, `scanf()` normally needs the variable's address.

❌ Incorrect:

```c
int age;

scanf("%d", age);
```

✅ Correct:

```c
int age;

scanf("%d", &age);
```

The `&` obtains the address of the variable.

---

## 3.2 Using the Wrong Format Specifier

Examples:

```text
%d   → int
%f   → float
%c   → char
%s   → string
```

❌ Incorrect:

```c
int age = 20;

printf("%f", age);
```

✅ Correct:

```c
printf("%d", age);
```

---

## 3.3 Forgetting `#include<stdio.h>`

Functions such as `printf()` and `scanf()` come from the standard input/output library.

Include:

```c
#include<stdio.h>
```

at the beginning of the program.

---

## 3.4 Forgetting `&` for Numeric Input

❌ Incorrect:

```c
float marks;

scanf("%f", marks);
```

✅ Correct:

```c
float marks;

scanf("%f", &marks);
```

---

# 4. Operator Mistakes

## 4.1 Confusing `/` and `%`

`/` performs division.

`%` gives the remainder.

Example:

```c
int result;
result = 10 / 3;
```

The result is:

```text
3
```

But:

```c
int remainder;
remainder = 10 % 3;
```

The result is:

```text
1
```

---

## 4.2 Integer Division

When two integers are divided, the result is treated as an integer.

```c
int result;

result = 5 / 2;
```

Result:

```text
2
```

If a decimal result is required, use floating-point values.

```c
float result;

result = 5.0 / 2;
```

Result:

```text
2.5
```

---

## 4.3 Incorrect Increment and Decrement

Remember:

```c
i++;
```

increases `i` by 1.

```c
i--;
```

decreases `i` by 1.

Be careful when using these operators inside larger expressions because their position can affect the result.

---

## 4.4 Incorrect Logical Operators

Common logical operators:

```text
&&  → AND
||  → OR
!   → NOT
```

For example:

```c
if(age >= 18 && age <= 60)
```

means both conditions must be true.

---

# 5. Conditional Statement Mistakes

## 5.1 Using `=` Instead of `==`

❌ Incorrect:

```c
if(number = 10)
```

✅ Correct:

```c
if(number == 10)
```

---

## 5.2 Forgetting Braces

Although a single statement can be used without braces, braces make the structure clearer and help prevent mistakes.

Recommended:

```c
if(age >= 18)
{
    printf("Adult\n");
}
```

---

## 5.3 Incorrect `else` Placement

❌ Incorrect:

```c
if(age >= 18)
{
    printf("Adult\n");
}
printf("Finished\n");
else
{
    printf("Minor\n");
}
```

`else` must immediately follow its corresponding `if` block.

✅ Correct:

```c
if(age >= 18)
{
    printf("Adult\n");
}
else
{
    printf("Minor\n");
}
```

---

## 5.4 Forgetting `break` in `switch`

❌ Example:

```c
switch(choice)
{
    case 1:
        printf("One\n");

    case 2:
        printf("Two\n");
}
```

Without `break`, execution can continue into the next case.

✅ Better:

```c
switch(choice)
{
    case 1:
        printf("One\n");
        break;

    case 2:
        printf("Two\n");
        break;
}
```

---

# 6. Loop Mistakes

## 6.1 Forgetting to Update the Loop Variable

A loop must eventually reach its stopping condition.

❌ Example:

```c
int i = 1;

while(i <= 5)
{
    printf("%d\n", i);
}
```

`i` never changes, so the loop can continue indefinitely.

✅ Correct:

```c
int i = 1;

while(i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

---

## 6.2 Incorrect Loop Condition

Always check whether the condition allows the loop to terminate.

Example:

```c
for(i = 1; i <= 10; i++)
```

This runs from 1 through 10.

---

## 6.3 Off-by-One Errors

An off-by-one error occurs when a loop runs one time too many or one time too few.

For example:

```c
for(i = 0; i < 5; i++)
```

runs five times:

```text
0
1
2
3
4
```

---

## 6.4 Accidentally Creating an Infinite Loop

❌ Example:

```c
while(1)
{
    printf("Hello\n");
}
```

This loop has no normal stopping condition.

Infinite loops can be intentional, but they should only be used when appropriate.

---

# 7. Function Mistakes

## 7.1 Calling a Function With the Wrong Arguments

If a function expects arguments, provide the required values.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Call it with:

```c
add(5, 10);
```

---

## 7.2 Forgetting the Return Statement

If a function is declared to return a value, it should return the appropriate value.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

---

## 7.3 Confusing Function Declaration and Function Call

A function definition:

```c
int add(int a, int b)
{
    return a + b;
}
```

A function call:

```c
add(5, 10);
```

They serve different purposes.

---

## 7.4 Using the Wrong Return Type

For example:

```c
int average()
{
    return 75.5;
}
```

If a decimal value is required, a floating-point return type is more appropriate:

```c
float average()
{
    return 75.5;
}
```

---

# 8. Array Mistakes

## 8.1 Accessing an Invalid Index

If an array contains five elements:

```c
int numbers[5];
```

the valid indexes are:

```text
0
1
2
3
4
```

There is no valid index `5`.

❌ Incorrect:

```c
numbers[5] = 100;
```

---

## 8.2 Forgetting That Array Indexing Starts at 0

For:

```c
int numbers[5];
```

the first element is:

```c
numbers[0]
```

not:

```c
numbers[1]
```

---

## 8.3 Going Outside the Array

❌ Incorrect:

```c
int numbers[3];

numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
```

The array only has indexes `0` to `2`.

---

## 8.4 Incorrect Array Loop

For an array of five elements:

```c
int numbers[5];
```

a suitable loop is:

```c
for(i = 0; i < 5; i++)
{
    printf("%d\n", numbers[i]);
}
```

---

# 9. String Mistakes

## 9.1 Forgetting the Null Character Concept

C strings are character arrays that end with a null character:

```text
\0
```

For example:

```c
char name[] = "Michael";
```

C stores the characters followed by `\0`.

---

## 9.2 Comparing Strings With `==`

Strings should not normally be compared using:

```c
if(name1 == name2)
```

Instead, use a string comparison function such as:

```c
strcmp(name1, name2)
```

which requires:

```c
#include<string.h>
```

---

## 9.3 Forgetting `#include<string.h>`

Functions such as:

```c
strcpy()
strcmp()
strlen()
```

are provided by:

```c
#include<string.h>
```

---

## 9.4 Incorrect String Copy

Instead of trying to assign one character array directly:

❌ Incorrect:

```c
name = "Michael";
```

use:

```c
strcpy(name, "Michael");
```

when working with an existing character array.

---

# 10. Pointer Mistakes

## 10.1 Confusing a Variable With Its Address

Consider:

```c
int age = 20;
```

The value is:

```text
20
```

The address is obtained using:

```c
&age
```

---

## 10.2 Forgetting `*` When Dereferencing

Example:

```c
int age = 20;
int *ptr = &age;
```

The pointer stores the address.

To access the value through the pointer:

```c
printf("%d", *ptr);
```

---

## 10.3 Confusing `&` and `*`

A useful reminder:

```text
&variable  → address of variable

*pointer   → value stored at the address
```

Example:

```c
int age = 20;
int *ptr = &age;
```

Here:

```c
&age
```

means the address of `age`.

```c
*ptr
```

means the value stored at that address.

---

## 10.4 Using an Uninitialized Pointer

❌ Dangerous:

```c
int *ptr;

*ptr = 10;
```

The pointer has not been given a valid address.

A pointer should point to a valid memory location before being dereferenced.

---

# 11. Structure, Union and Enumeration Mistakes

## 11.1 Forgetting the `struct` Keyword

If a structure is declared as:

```c
struct Student
{
    char name[30];
    int age;
};
```

a variable can be declared as:

```c
struct Student student;
```

---

## 11.2 Accessing Structure Members Incorrectly

Use the dot operator:

```c
student.age
student.marks
student.name
```

Example:

```c
student.age = 20;
```

---

## 11.3 Confusing Structures and Unions

A structure stores its members separately.

A union shares the same memory location among its members.

Example:

```c
union Data
{
    int number;
    float decimal;
    char letter;
};
```

Only one member's stored value should generally be treated as active at a time.

---

## 11.4 Forgetting Enumeration Values Start From 0 by Default

For example:

```c
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY
};
```

the values are:

```text
MONDAY     → 0
TUESDAY    → 1
WEDNESDAY  → 2
```

You can explicitly assign values when required:

```c
enum Day
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY
};
```

Then:

```text
MONDAY     → 1
TUESDAY    → 2
WEDNESDAY  → 3
```

---

# 12. File Handling Mistakes

## 12.1 Forgetting to Check Whether a File Opened

When using:

```c
file = fopen("students.txt", "r");
```

the operation can fail.

Check:

```c
if(file == NULL)
{
    printf("Error opening file.\n");
}
```

---

## 12.2 Forgetting to Close a File

After finishing with a file:

```c
fclose(file);
```

should be used.

---

## 12.3 Using the Wrong File Mode

Common modes include:

```text
"r"  → read
"w"  → write
"a"  → append
```

Choosing the wrong mode can produce unexpected results.

---

## 12.4 Accidentally Overwriting a File

Using:

```c
fopen("students.txt", "w");
```

opens the file for writing and can replace existing contents.

If you want to add records to an existing file, use:

```c
fopen("students.txt", "a");
```

---

## 12.5 Forgetting to Check File Input

When reading formatted data, check whether the expected data was successfully read.

For example:

```c
while(fscanf(file, "%s %d %f",
    student.name,
    &student.age,
    &student.marks) == 3)
{
    /* process student */
}
```

---

# 13. General Programming Mistakes

## 13.1 Poor Indentation

Code can work while still being difficult to read.

❌ Difficult to read:

```c
if(age>=18){printf("Adult\n");}
```

✅ Easier to read:

```c
if(age >= 18)
{
    printf("Adult\n");
}
```

Good indentation makes code easier to understand and debug.

---

## 13.2 Using Meaningless Variable Names

Instead of:

```c
int x;
```

when the variable represents an age, use:

```c
int age;
```

Meaningful names make programs easier to understand.

---

## 13.3 Writing Very Large Programs Without Testing

Do not write an entire program and only test it at the end.

A better approach is:

```text
Write a small section
       ↓
Compile
       ↓
Run
       ↓
Check result
       ↓
Continue
```

This makes errors easier to locate.

---

## 13.4 Ignoring Compiler Errors

Compiler errors are useful clues.

For example:

```text
expected ';' before '}'
```

usually points toward a missing semicolon.

Read the error message carefully and check the indicated line and nearby code.

---

## 13.5 Not Testing Different Inputs

A program should not only be tested with one example.

For example, if a program accepts marks, test:

```text
0
50
70
100
```

and other appropriate values.

---

## 13.6 Forgetting Edge Cases

Think about unusual or boundary situations.

Examples:

```text
What if the number is 0?
What if the user enters a negative number?
What if an array is empty?
What if the file does not exist?
```

Considering these cases helps make programs more reliable.

---

# 14. Quick Checklist

Before compiling a C program, check:

### Syntax

* [ ] Did I include the required header files?
* [ ] Did I put `;` where required?
* [ ] Are all `{ }` matched?
* [ ] Are all `( )` matched?
* [ ] Did I spell keywords correctly?
* [ ] Did I use the correct capitalization?

### Variables

* [ ] Did I declare my variables?
* [ ] Did I choose the correct data type?
* [ ] Did I initialize variables where necessary?

### Input and Output

* [ ] Did I use the correct format specifier?
* [ ] Did I use `&` correctly with `scanf()`?
* [ ] Did I include `stdio.h`?

### Conditions

* [ ] Did I use `==` when comparing?
* [ ] Did I use `=` when assigning?
* [ ] Did I place `else` correctly?
* [ ] Did I include `break` in `switch` cases where needed?

### Loops

* [ ] Does the loop have a correct condition?
* [ ] Does the loop variable change?
* [ ] Can the loop terminate?
* [ ] Did I avoid going outside an array?

### Functions

* [ ] Does the function have the correct return type?
* [ ] Are the arguments correct?
* [ ] Did I return a value when required?

### Arrays and Strings

* [ ] Does the index stay within the array boundaries?
* [ ] Do I remember that indexing starts at `0`?
* [ ] Did I include `string.h` when necessary?
* [ ] Did I handle strings correctly?

### Pointers

* [ ] Do I understand whether I need `&` or `*`?
* [ ] Does the pointer point to a valid memory location?
* [ ] Am I dereferencing a valid pointer?

### Structures

* [ ] Did I use `struct` correctly?
* [ ] Did I access members using `.`?
* [ ] Do I understand the difference between structures and unions?

### Files

* [ ] Did I check whether `fopen()` succeeded?
* [ ] Did I use the correct file mode?
* [ ] Did I close the file with `fclose()`?

---

# 🎯 Final Reminder

Making mistakes is a normal part of learning C.

The important process is:

```text
Make a mistake
      ↓
Understand the error
      ↓
Fix the code
      ↓
Run the program again
      ↓
Remember the lesson
```

Do not try to memorize every error.

Instead, learn to **read the compiler message, locate the problem, understand why it happened, and correct it**.

This README serves as a growing reference for common mistakes encountered while learning C.
 