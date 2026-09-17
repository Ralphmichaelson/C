# Introduction to C

This topic introduces the fundamentals of the **C programming language**.

The `main.c` file contains my first C program and demonstrates the basic structure of a C program, comments, output using `printf()`, the `main()` function, and returning a value from the program.

---

# What Is C?

C is a general-purpose programming language that was developed in the early 1970s.

It is widely used for:

* System programming
* Embedded systems
* Operating systems
* Compilers
* Device drivers
* High-performance applications
* Learning programming fundamentals

C is a **compiled language**, meaning that source code is translated into machine code by a compiler before it is executed.

---

# Why Learn C?

Learning C provides a strong foundation for understanding how programs work.

C helps you learn concepts such as:

* Variables
* Data types
* Operators
* Conditions
* Loops
* Functions
* Arrays
* Pointers
* Memory management
* Structures
* File handling

Many of these ideas are also important when learning other programming languages.

---

# My First C Program

The `main.c` file contains:

```c
#include <stdio.h>

int main(void)
{
    // My first C program
    printf("Hello, World!\n");
    printf("My name is Michael Kanyugo.\n");
    printf("I am learning C programming.\n");

    return 0;
}
```

This program prints three lines of text to the terminal.

---

# Understanding the Structure of a C Program

A basic C program can look like this:

```c
#include <stdio.h>

int main(void)
{
    // Program statements

    return 0;
}
```

Each part has a purpose.

---

# 1. `#include <stdio.h>`

```c
#include <stdio.h>
```

This tells the preprocessor to include the contents of the standard input/output header file.

`stdio.h` provides functions and definitions for standard input and output.

One function used from this header is:

```c
printf()
```

which is used to display output.

---

# 2. The `main()` Function

```c
int main(void)
{
    
}
```

The `main` function is the entry point of a C program.

When the program is executed, program execution begins in `main()`.

### `int`

The `int` before `main` means that the function returns an integer value.

### `void`

The `void` inside the parentheses indicates that this version of `main` does not take any arguments.

---

# 3. Curly Braces `{ }`

```c
int main(void)
{
    // Statements
}
```

Curly braces define the body of the function.

The statements written between `{` and `}` belong to the `main()` function.

---

# 4. Comments

The program contains:

```c
// My first C program
```

This is a **single-line comment**.

Comments are ignored by the compiler and are written to help programmers understand the code.

Another form is a multi-line comment:

```c
/*
    This is a
    multi-line comment.
*/
```

Comments can be used to:

* Explain code
* Leave notes
* Organize sections
* Temporarily describe code

---

# 5. `printf()`

The program uses:

```c
printf("Hello, World!\n");
```

`printf()` is used to display formatted output.

For example:

```c
printf("Hello, World!");
```

displays:

```text
Hello, World!
```

---

# 6. The Newline Character `\n`

In:

```c
printf("Hello, World!\n");
```

the:

```text
\n
```

is an escape sequence representing a newline.

It moves the cursor to the next line.

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

Without `\n`:

```c
printf("Hello");
printf("World");
```

the output may appear as:

```text
HelloWorld
```

---

# 7. Semicolons

C uses semicolons to terminate statements.

Example:

```c
printf("Hello, World!\n");
return 0;
```

The semicolon indicates the end of each statement.

Forgetting a semicolon can cause a compilation error.

---

# 8. `return 0;`

The program ends with:

```c
return 0;
```

This returns the integer value `0` from `main()`.

A return value of `0` conventionally indicates that the program completed successfully.

So:

```c
int main(void)
{
    printf("Hello");
    return 0;
}
```

means that `main()` returns `0` when it finishes.

---

# Program Flow

The program can be understood as:

```text
Program starts
      ↓
main() begins
      ↓
printf("Hello, World!")
      ↓
printf("My name is...")
      ↓
printf("I am learning...")
      ↓
return 0
      ↓
Program ends
```

---

# Basic C Syntax

C uses a structured syntax.

Example:

```c
printf("Hello");
```

General form:

```text
function(argument);
```

A function call consists of:

* Function name
* Parentheses
* Arguments
* Semicolon

---

# C Is Case-Sensitive

C is case-sensitive.

These are different:

```c
printf()
Printf()
PRINTF()
```

The correct standard function is:

```c
printf()
```

Similarly:

```c
main
Main
MAIN
```

are treated as different identifiers.

---

# C Source Files

C programs are normally stored in files with the `.c` extension.

For example:

```text
main.c
program.c
calculator.c
```

In this topic, the source file is:

```text
main.c
```

---

# Compiler

Because C is normally compiled, you need a C compiler to turn your source code into an executable program.

A common compiler is **GCC (GNU Compiler Collection)**.

The source code:

```text
main.c
```

can be compiled into an executable such as:

```text
main.exe
```

on Windows.

---

# Compiling the Program

From the terminal, the program can be compiled using:

```bash
gcc main.c -o main
```

### Breaking it down

```text
gcc
```

runs the GCC compiler.

```text
main.c
```

is the source file.

```text
-o
```

specifies the output filename.

```text
main
```

is the name of the generated executable.

On Windows, the executable will normally be:

```text
main.exe
```

---

# Running the Program

After compiling, the program can be run from the terminal using:

```bash
.\main
```

The program should display:

```text
Hello, World!
My name is Michael Kanyugo.
I am learning C programming.
```

---

# Source Code vs Executable

The relationship can be understood as:

```text
main.c
  │
  │  GCC compiler
  ▼
main.exe
  │
  ▼
Program runs
```

The `.c` file contains the human-readable source code.

The executable contains compiled machine code that the computer can run.

---

# Important Terms

| Term        | Meaning                                                  |
| ----------- | -------------------------------------------------------- |
| C           | A general-purpose programming language                   |
| Source code | Human-readable program instructions                      |
| Compiler    | Translates source code into executable code              |
| GCC         | A commonly used C compiler                               |
| `main()`    | Entry point of a C program                               |
| `stdio.h`   | Standard input/output header                             |
| `printf()`  | Displays formatted output                                |
| Comment     | Text written for programmers and ignored by the compiler |
| Statement   | An instruction in a C program                            |
| `return`    | Sends a value back from a function                       |
| `\n`        | Newline escape sequence                                  |
| `.c`        | Common extension for C source files                      |

---

# Common Mistakes

### 1. Forgetting the Semicolon

Incorrect:

```c
printf("Hello")
```

Correct:

```c
printf("Hello");
```

---

### 2. Misspelling `printf`

Incorrect:

```c
printff("Hello");
```

Correct:

```c
printf("Hello");
```

---

### 3. Incorrect Capitalization

Incorrect:

```c
Printf("Hello");
```

Correct:

```c
printf("Hello");
```

---

### 4. Forgetting the Header

When using `printf()`, include:

```c
#include <stdio.h>
```

---

### 5. Forgetting `main()`

A basic executable C program needs a `main` function as its entry point.

Example:

```c
int main(void)
{
    return 0;
}
```

---

### 6. Incorrect Braces

Incorrect:

```c
int main(void)
{
    printf("Hello");
```

Correct:

```c
int main(void)
{
    printf("Hello");
}
```

---

### 7. Forgetting the Return Statement

For the form of `main` used in this project:

```c
int main(void)
{
    printf("Hello");
    return 0;
}
```

including `return 0;` makes the return value explicit.

---

# What I Practiced

In `main.c`, I practiced:

* Creating a basic C source file.
* Including `stdio.h`.
* Creating the `main()` function.
* Writing comments.
* Using `printf()`.
* Printing multiple lines.
* Using the `\n` newline escape sequence.
* Ending statements with semicolons.
* Returning a value from `main()`.
* Compiling a C program with GCC.
* Running a compiled C program from the terminal.

---

# Practice Tasks

Try modifying `main.c` to:

1. Print your university name.
2. Print your course.
3. Print your current year of study.
4. Print a short personal introduction.
5. Print five separate lines using `printf()`.
6. Experiment with different combinations of text and `\n`.

For example:

```c
printf("My university is ...\n");
printf("I am studying Computer Science.\n");
```

---

# Key Takeaways

* C is a compiled programming language.
* A C source file normally uses the `.c` extension.
* `main()` is the entry point of the program.
* `#include <stdio.h>` provides standard input/output functionality.
* `printf()` is used to display output.
* `\n` creates a new line.
* C statements normally end with semicolons.
* Curly braces define blocks of code.
* `return 0;` indicates successful completion of `main()`.
* GCC can compile C source code into an executable program.

---

# Folder Contents

```text
01-introduction-to-c/
├── main.c
└── README.md
```

## Learning Progress

This is the first topic in my C programming learning section.

It introduces the basic structure of a C program and provides the foundation for the topics that follow, including variables, data types, input, operators, conditions, loops, functions, arrays, pointers, and other C concepts.
