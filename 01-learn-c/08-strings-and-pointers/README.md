# Strings and Pointers in C

This topic introduces **strings and pointers in C**.

The `main.c` file demonstrates:

* Strings using character arrays
* String initialization
* Printing strings with `%s`
* `strlen()`
* `strcpy()`
* `strcmp()`
* Memory addresses
* The address operator `&`
* Pointers
* The dereference operator `*`
* Changing a value through a pointer
* Pointers and functions
* Pointers and arrays

---

# 1. Strings in C

C does not have a separate built-in `string` data type.

Strings are stored using arrays of characters.

Example:

```c
char name[]="Michael";
```

This creates a character array containing the characters in `"Michael"`.

A C string is terminated by a special character called the **null character**:

```text
\0
```

Conceptually:

```text
M i c h a e l \0
```

The null character tells C where the string ends.

---

# 2. Printing a String

The `%s` format specifier is used to print a string.

Example:

```c
printf("name is:%s\n",name);
```

Output:

```text
name is:Michael
```

---

# 3. String Length

The `strlen()` function is used to determine the length of a string.

Example:

```c
length=strlen(name);
```

For:

```text
Michael
```

the length is:

```text
7
```

The null character at the end of the string is not counted as part of the string length returned by `strlen()`.

---

# 4. `strlen()`

The function comes from:

```c
#include<string.h>
```

Example:

```c
char name[]="Michael";

length=strlen(name);
```

Output:

```text
length is:7
```

---

# 5. Copying Strings

The `strcpy()` function copies one string into another character array.

The program contains:

```c
strcpy(copiedName,name);
```

Here:

```text
name
  ↓
Michael
  ↓
copiedName
```

After the copy:

```text
original name is:Michael
copied name is:Michael
```

The destination array must have enough space to hold the copied string, including its terminating `\0`.

---

# 6. Comparing Strings

The `strcmp()` function compares two strings.

Example:

```c
comparison=strcmp(name,otherName);
```

The program then checks:

```c
if(comparison==0)
{
	printf("The strings are equal.\n");
}
```

A return value of `0` indicates that the strings are equal.

For:

```text
name     = Michael
otherName = Michael
```

the program produces:

```text
The strings are equal.
```

---

# 7. String Functions

The main string functions used in this topic come from:

```c
#include<string.h>
```

| Function   | Purpose                        |
| ---------- | ------------------------------ |
| `strlen()` | Finds the length of a string   |
| `strcpy()` | Copies one string into another |
| `strcmp()` | Compares two strings           |

---

# 8. What Is a Pointer?

A pointer is a variable that stores the **memory address** of another variable.

Example:

```c
int number=20;
int *pointer;
```

The declaration:

```c
int *pointer;
```

creates a pointer that can store the address of an integer variable.

---

# 9. The Address Operator `&`

The `&` operator is used to obtain the address of a variable.

Example:

```c
printf("address of number is:%p\n",(void*)&number);
```

Here:

```c
&number
```

means:

> Get the memory address of `number`.

The exact address depends on the program's execution and memory layout.

For example, your program produced:

```text
address of number is:0060FEB8
```

A different run can produce a different address.

---

# 10. Storing an Address in a Pointer

The program contains:

```c
pointer=&number;
```

This means:

```text
number
   ↓
memory address
   ↓
pointer
```

The pointer now stores the address of `number`.

---

# 11. Dereferencing a Pointer

The `*` operator can be used to access the value stored at the address held by a pointer.

Example:

```c
printf("value pointed to by pointer is:%d\n",*pointer);
```

If:

```text
number = 20
```

then:

```text
*pointer = 20
```

The `*` in this context is called the **dereference operator**.

---

# 12. Address vs Value

These two expressions have different meanings:

```c
&number
```

and:

```c
*pointer
```

### `&number`

Gets the address of `number`.

### `*pointer`

Gets the value stored at the address contained in `pointer`.

A simple way to visualize it:

```text
number
┌─────────┐
│   20    │
└─────────┘
    ↑
    │
  address
    │
    └────── pointer
```

---

# 13. Pointer Example

The program contains:

```c
int number=20;
int *pointer;

pointer=&number;
```

Then:

```c
printf("number is:%d\n",number);
```

prints:

```text
number is:20
```

and:

```c
printf("value pointed to by pointer is:%d\n",*pointer);
```

prints:

```text
value pointed to by pointer is:20
```

---

# 14. Changing a Value Through a Pointer

Pointers can be used to modify the value stored in another variable.

The program defines:

```c
void changeValue(int *number)
{
	*number=*number+10;
}
```

The function receives a pointer to an integer.

Then:

```c
*number=*number+10;
```

changes the original value.

The function is called using:

```c
changeValue(&number);
```

Before the function:

```text
number = 20
```

After the function:

```text
number = 30
```

The output confirms:

```text
new number is:30
```

---

# 15. Pointers and Functions

The function:

```c
void changeValue(int *number)
{
	*number=*number+10;
}
```

demonstrates passing an address to a function.

The call:

```c
changeValue(&number);
```

passes the address of `number`.

Inside the function:

```c
*number
```

refers to the original variable.

This allows the function to modify the original value rather than just working with a separate copy.

---

# 16. Pointers and Arrays

The program contains:

```c
int numbers[3]={10,20,30};
```

and:

```c
int *arrayPointer;
```

The pointer is assigned:

```c
arrayPointer=numbers;
```

In this context, the array name refers to the address of its first element.

Therefore:

```text
arrayPointer
```

points to:

```text
numbers[0]
```

---

# 17. Accessing Array Elements Through a Pointer

The program uses:

```c
printf("first element is:%d\n",*arrayPointer);
```

This accesses the first element.

It then uses:

```c
printf("second element is:%d\n",*(arrayPointer+1));
```

to access the second element.

And:

```c
printf("third element is:%d\n",*(arrayPointer+2));
```

to access the third element.

The result is:

```text
first element is:10
second element is:20
third element is:30
```

---

# 18. Array Indexing

The same array can be accessed directly using indexes:

```c
printf("numbers[0] is:%d\n",numbers[0]);
printf("numbers[1] is:%d\n",numbers[1]);
printf("numbers[2] is:%d\n",numbers[2]);
```

Output:

```text
numbers[0] is:10
numbers[1] is:20
numbers[2] is:30
```

---

# 19. Pointer Access vs Array Indexing

These two approaches access the same elements:

```c
numbers[0]
```

and:

```c
*arrayPointer
```

Similarly:

```c
numbers[1]
```

and:

```c
*(arrayPointer+1)
```

Both can access the second element.

This relationship becomes very important when learning how arrays and pointers work internally.

---

# 20. Complete Program Flow

The program works in this order:

```text
Program starts
      ↓
Create strings
      ↓
Find string length
      ↓
Copy string
      ↓
Compare strings
      ↓
Create integer variable
      ↓
Find its memory address
      ↓
Store address in pointer
      ↓
Dereference pointer
      ↓
Change value through pointer
      ↓
Create an integer array
      ↓
Use pointer to access array
      ↓
Access array using indexes
      ↓
Program ends
```

---

# Common Mistakes

## 1. Forgetting `string.h`

Functions such as:

```c
strlen()
strcpy()
strcmp()
```

are declared in:

```c
#include<string.h>
```

---

## 2. Using the Wrong Format Specifier for a String

For a string:

```c
printf("%s",name);
```

is appropriate.

`%d` is used for integers, not strings.

---

## 3. Confusing `&` and `*`

Remember:

```text
& → address of a variable

* → value stored at an address
```

For example:

```c
pointer=&number;
```

stores the address.

While:

```c
*pointer
```

gets the value at that address.

---

## 4. Using an Uninitialized Pointer

Incorrect:

```c
int *pointer;

*pointer=20;
```

The pointer has not been given a valid address.

A pointer should first be assigned a valid address before dereferencing it.

Example:

```c
int number=20;
int *pointer;

pointer=&number;
```

Then:

```c
*pointer
```

can be used.

---

## 5. Using an Array That Is Too Small for a Copied String

The destination array must have enough space when using:

```c
strcpy()
```

For example:

```c
char copiedName[20];
```

has enough space for `"Michael"` and its terminating null character.

---

## 6. Accessing Outside an Array

For:

```c
int numbers[3]={10,20,30};
```

the valid indexes are:

```text
0
1
2
```

Accessing an invalid index such as:

```c
numbers[3]
```

is outside the array.

---

## 7. Forgetting the Null Character

A C string needs a terminating:

```text
\0
```

character.

This is why enough space must be available when creating character arrays manually.

---

# What I Practiced

In `main.c`, I practiced:

* Creating strings using character arrays.
* Printing strings with `%s`.
* Using `strlen()`.
* Using `strcpy()`.
* Using `strcmp()`.
* Understanding null-terminated strings.
* Getting a variable's address using `&`.
* Declaring pointers.
* Storing an address in a pointer.
* Dereferencing a pointer using `*`.
* Changing a variable through a pointer.
* Passing a pointer to a function.
* Using pointers with arrays.
* Accessing array elements using pointer arithmetic.
* Accessing array elements using indexes.

---

# Practice Tasks

Modify `main.c` and try the following.

### 1. Change the Name

Try:

```c
char name[]="Michael Kanyugo";
```

and observe the new string length.

### 2. Create Another String

Create another character array and compare it with `name`.

### 3. Copy Another String

Create a second array and use `strcpy()` to copy `name` into it.

### 4. Create a Pointer to Another Variable

For example:

```c
int age=20;
int *agePointer;

agePointer=&age;
```

Print:

```text
The value
The address
The value through the pointer
```

### 5. Change a Variable Using a Pointer

Create a function that increases a number by 5 through a pointer.

### 6. Access an Array With a Pointer

Create an array of five numbers and use a pointer to display each element.

---

# Quick Reference

## String

```c
char name[]="Michael";
```

## Print String

```c
printf("%s",name);
```

## String Length

```c
strlen(name);
```

## Copy String

```c
strcpy(copiedName,name);
```

## Compare Strings

```c
strcmp(name,otherName);
```

## Address

```c
&number
```

## Pointer

```c
int *pointer;
```

## Store Address

```c
pointer=&number;
```

## Dereference

```c
*pointer
```

## Pointer and Array

```c
int numbers[3]={10,20,30};
int *arrayPointer;

arrayPointer=numbers;
```

---

# Key Takeaways

1. C strings are stored as character arrays.
2. Strings end with a null character.
3. `%s` is used to display a string.
4. `strlen()` calculates string length.
5. `strcpy()` copies a string.
6. `strcmp()` compares strings.
7. A pointer stores a memory address.
8. `&` obtains the address of a variable.
9. `*` dereferences a pointer and accesses the value at the stored address.
10. Pointers can be passed to functions to allow functions to modify original variables.
11. Arrays and pointers are closely related.
12. A pointer can be used to access array elements.

---

# Folder Contents

```text
08-strings-and-pointers/
├── main.c
└── README.md
```

## Learning Progress

This is the eighth topic in my C programming learning section.

It builds on arrays, functions, loops, and conditions from earlier topics and introduces strings and pointers, which are important concepts for understanding how C works with memory.

The next topic will introduce **structures, unions, and enumerations**.
