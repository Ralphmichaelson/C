# Input and Output in C

This topic introduces **input and output in C**.

The `main.c` program demonstrates how a C program can display information using `printf()` and receive information from the user using `scanf()`.

The topic also introduces format specifiers, addresses using `&`, and basic formatting of output.

---

# What Is Input and Output?

**Input** is information provided to a program.

Examples include:

* A user's age
* A student's grade
* A product price
* A name
* A number

**Output** is information produced and displayed by a program.

For example:

```text
Input:
20

Output:
Your age is 20
```

In C, common functions for basic console input and output are:

```c
printf()
scanf()
```

---

# The `printf()` Function

`printf()` is used to display output on the screen.

Example:

```c
printf("Hello, World!");
```

Output:

```text
Hello, World!
```

A newline can be added using `\n`:

```c
printf("Hello, World!\n");
```

---

# Displaying Variables

`printf()` can also display the value stored in a variable.

Example:

```c
int age = 20;

printf("Age: %d\n", age);
```

Output:

```text
Age: 20
```

The `%d` tells `printf()` that an integer value will be supplied.

---

# What Is `scanf()`?

`scanf()` is used to receive input from the user through the standard input stream, usually the keyboard.

Example:

```c
int age;

scanf("%d", &age);
```

The program waits for the user to enter an integer.

If the user enters:

```text
20
```

the value `20` is stored in `age`.

---

# Understanding `&`

You will often see:

```c
scanf("%d", &age);
```

The `&` operator gets the **address of the variable**.

`scanf()` needs the address because it must place the user's input into the variable.

Conceptually:

```text
User enters 20
      ↓
   scanf()
      ↓
address of age
      ↓
age = 20
```

This concept becomes even more important when learning **pointers** later.

---

# Basic Input Example

```c
int age;

printf("Enter your age: ");
scanf("%d", &age);

printf("Your age is %d\n", age);
```

Example interaction:

```text
Enter your age: 20
Your age is 20
```

---

# Format Specifiers

Format specifiers tell functions such as `printf()` and `scanf()` what type of data is being used.

Common examples include:

| Specifier | Common Use              |
| --------- | ----------------------- |
| `%d`      | `int`                   |
| `%f`      | `float`                 |
| `%lf`     | `double` with `scanf()` |
| `%c`      | `char`                  |
| `%s`      | String                  |
| `%zu`     | `size_t`                |

---

# Integer Input

For an `int`:

```c
int age;

scanf("%d", &age);
```

Output:

```c
printf("%d", age);
```

---

# Float Input

For a `float`:

```c
float height;

scanf("%f", &height);
```

Output:

```c
printf("%f", height);
```

The program in this topic formats the value to two decimal places:

```c
printf("%.2f", height);
```

For example:

```text
1.75
```

---

# Double Input

For a `double`, `scanf()` normally uses `%lf`:

```c
double price;

scanf("%lf", &price);
```

When displaying a `double` with `printf()`, `%f` is used:

```c
printf("%f", price);
```

This difference is important:

```text
scanf()  → %lf for double
printf() → %f for double
```

---

# Character Input

For a `char`:

```c
char grade;

scanf(" %c", &grade);
```

The program in this topic intentionally uses:

```c
" %c"
```

rather than:

```c
"%c"
```

The space before `%c` tells `scanf()` to skip leading whitespace, including a leftover newline from earlier input.

---

# The `\n` Escape Sequence

`\n` moves the cursor to the next line.

Example:

```c
printf("Hello\n");
printf("World\n");
```

Output:

```text
Hello
World
```

---

# Formatting Decimal Output

The program uses:

```c
printf("Height: %.2f meters\n", height);
```

The `.2` means that two digits should be displayed after the decimal point.

Examples:

```text
1.75
12.00
5.50
```

Other examples:

```c
printf("%.1f", value);
printf("%.3f", value);
```

---

# The Program in `main.c`

The program contains:

```c
#include <stdio.h>

int main(void)
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Your Information ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```

---

# Understanding the Program Flow

The program works in this order:

```text
Program starts
      ↓
Create variables
      ↓
Ask for age
      ↓
Read age using scanf()
      ↓
Ask for height
      ↓
Read height using scanf()
      ↓
Ask for grade
      ↓
Read grade using scanf()
      ↓
Display all values using printf()
      ↓
return 0
      ↓
Program ends
```

---

# Example Program Run

A possible interaction is:

```text
Enter your age: 20
Enter your height in meters: 1.75
Enter your grade: A

--- Your Information ---
Age: 20
Height: 1.75 meters
Grade: A
```

---

# `printf()` vs `scanf()`

| Function   | Purpose         |
| ---------- | --------------- |
| `printf()` | Displays output |
| `scanf()`  | Reads input     |

Simple way to remember:

```text
scanf()  → program receives information
printf() → program displays information
```

---

# `scanf()` and Variable Addresses

Consider:

```c
int age;

scanf("%d", &age);
```

The variable:

```text
age
```

contains a location in memory where its value can be stored.

The `&` operator gives `scanf()` that location.

Conceptually:

```text
age
┌─────────────┐
│     20      │
└─────────────┘
      ▲
      │
    &age
```

This becomes especially important when learning pointers and memory in later C topics.

---

# Common Mistakes

## 1. Forgetting `&`

Incorrect:

```c
int age;

scanf("%d", age);
```

Correct:

```c
scanf("%d", &age);
```

For ordinary variables, `scanf()` generally needs the address where it should store the input.

---

## 2. Using the Wrong Format Specifier

Incorrect:

```c
int age;

scanf("%f", &age);
```

Correct:

```c
scanf("%d", &age);
```

The format specifier should match the variable type expected by `scanf()`.

---

## 3. Forgetting the Space Before `%c`

When character input follows another `scanf()`, this can cause confusion:

```c
scanf("%c", &grade);
```

A common solution is:

```c
scanf(" %c", &grade);
```

The leading space tells `scanf()` to skip whitespace.

---

## 4. Using `%f` for a `double` with `scanf()`

Incorrect:

```c
double price;

scanf("%f", &price);
```

Correct:

```c
scanf("%lf", &price);
```

For `printf()`:

```c
printf("%f", price);
```

---

## 5. Expecting `scanf()` to Validate Everything

For example:

```c
int age;

scanf("%d", &age);
```

If the user enters:

```text
hello
```

the input does not become a valid integer.

More advanced input validation will be covered later as your C knowledge grows.

---

## 6. Forgetting to Give the User a Prompt

Technically this can work:

```c
scanf("%d", &age);
```

but it is much clearer to use:

```c
printf("Enter your age: ");
scanf("%d", &age);
```

A prompt tells the user what the program expects.

---

# Basic Input and Output Rules

When working with console input and output:

```text
1. Choose the correct data type.
2. Use the matching format specifier.
3. Use & with ordinary variables in scanf().
4. Use printf() to display results.
5. Add clear prompts before requesting input.
6. Format output so it is easy to read.
```

---

# What I Practiced

In `main.c`, I practiced:

* Using `printf()`.
* Using `scanf()`.
* Reading integers.
* Reading floating-point values.
* Reading characters.
* Using format specifiers.
* Using `&` with `scanf()`.
* Using `\n`.
* Formatting decimal output.
* Creating interactive console programs.
* Testing a program with different user inputs.

---

# Practice Tasks

Modify the program to practice:

### 1. Add a student name

```c
char name[50];
```

This will introduce strings, which we will study more carefully later.

### 2. Add a score

```c
int score;
```

Ask the user to enter their score.

### 3. Add a weight

```c
float weight;
```

Ask the user to enter their weight.

### 4. Display everything

Create a final summary such as:

```text
--- Student Information ---
Name: Michael
Age: 20
Height: 1.75 meters
Weight: 65.00 kg
Grade: A
```

---

# Quick Reference

### Integer

```c
int number;

scanf("%d", &number);

printf("%d", number);
```

### Float

```c
float value;

scanf("%f", &value);

printf("%f", value);
```

### Double

```c
double value;

scanf("%lf", &value);

printf("%f", value);
```

### Character

```c
char letter;

scanf(" %c", &letter);

printf("%c", letter);
```

---

# Key Takeaways

* Input allows a program to receive information from the user.
* Output allows a program to display information.
* `printf()` is commonly used for output.
* `scanf()` is commonly used for formatted input.
* Format specifiers must match the expected data type.
* `&` provides the address of a variable to `scanf()`.
* `%d` is commonly used for `int`.
* `%f` is used for `float` with `scanf()` and for floating-point output with `printf()`.
* `%lf` is used for `double` with `scanf()`.
* `%c` is used for `char`.
* A leading space in `" %c"` can help skip leftover whitespace.
* Clear prompts make interactive programs easier to use.
* Input validation becomes increasingly important as programs become more complex.

---

# Folder Contents

```text
03-input-and-output/
├── main.c
└── README.md
```

## Learning Progress

This is the third topic in my C programming learning section.

It builds on variables and data types by allowing programs to communicate with users through keyboard input and terminal output.

The next topics will build on these concepts to perform calculations, make decisions, repeat operations, and create more useful programs.
