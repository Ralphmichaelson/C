# Conditional Statements in C

This topic introduces **conditional statements in C**.

Conditional statements allow a program to make decisions based on whether a condition is true or false.

The `main.c` file demonstrates:

* `if`
* `if...else`
* `else if`
* Nested `if`
* `switch`
* `case`
* `break`
* `default`

---

# What Are Conditional Statements?

Conditional statements allow a program to choose what to do depending on a condition.

For example:

```c
if(age>=18)
{
    printf("You are an adult.");
}
```

If:

```text
age = 20
```

the condition:

```text
age>=18
```

is true, so the statement inside the `if` block is executed.

---

# 1. The `if` Statement

The `if` statement executes a block of code when a condition is true.

Syntax:

```c
if(condition)
{
    statement;
}
```

Example:

```c
if(age>=18)
{
    printf("You are an adult.\n");
}
```

If `age` is 20, the message is displayed.

If `age` is below 18, the message is not displayed.

---

# How `if` Works

```text
Condition
    ↓
Is it true?
 ┌──┴──┐
Yes    No
 ↓      ↓
Run    Skip
code   code
```

---

# 2. The `if...else` Statement

`if...else` allows the program to choose between two alternatives.

Syntax:

```c
if(condition)
{
    statement;
}
else
{
    statement;
}
```

Example:

```c
if(number%2==0)
{
    printf("The number is even.\n");
}
else
{
    printf("The number is odd.\n");
}
```

If the condition is true, the first block runs.

If it is false, the `else` block runs.

---

# Example: Even and Odd Numbers

The program uses:

```c
if(number%2==0)
{
    printf("%d is an even number.\n",number);
}
else
{
    printf("%d is an odd number.\n",number);
}
```

The `%` operator gives the remainder.

For:

```text
10 % 2
```

the result is:

```text
0
```

Therefore, 10 is even.

---

# 3. The `else if` Statement

`else if` is used when a program needs to test multiple conditions.

Example:

```c
if(score>=80)
{
    printf("Grade: A\n");
}
else if(score>=70)
{
    printf("Grade: B\n");
}
else if(score>=60)
{
    printf("Grade: C\n");
}
else if(score>=50)
{
    printf("Grade: D\n");
}
else
{
    printf("Grade: F\n");
}
```

The conditions are checked from top to bottom.

As soon as one condition is true, its block is executed and the remaining conditions are skipped.

---

# Example: Grade System

For:

```text
score = 75
```

the program checks:

```text
75 >= 80 → false
75 >= 70 → true
```

Therefore:

```text
Grade: B
```

is displayed.

---

# 4. Nested `if`

A nested `if` means placing one `if` statement inside another `if` statement.

Example:

```c
if(age>=18)
{
    printf("You are old enough to vote.\n");

    if(age>=21)
    {
        printf("You are also 21 or older.\n");
    }
    else
    {
        printf("You are below 21.\n");
    }
}
else
{
    printf("You are below 18.\n");
}
```

Here, the second `if` is only checked when the first condition is true.

---

# How Nested `if` Works

```text
age >= 18?
     │
 ┌───┴───┐
Yes      No
 │        │
 ↓        ↓
Check    Below
age>=21  18
 │
 ├── Yes → 21 or older
 │
 └── No  → Below 21
```

---

# 5. The `switch` Statement

A `switch` statement is useful when one value needs to be compared against several possible values.

Basic syntax:

```c
switch(choice)
{
    case 1:
        statement;
        break;

    case 2:
        statement;
        break;

    default:
        statement;
}
```

---

# `case`

Each `case` represents a possible value.

Example:

```c
switch(choice)
{
    case 1:
        printf("You selected Option 1.\n");
        break;

    case 2:
        printf("You selected Option 2.\n");
        break;

    case 3:
        printf("You selected Option 3.\n");
        break;
}
```

If:

```text
choice = 2
```

the second case executes.

---

# `break`

The `break` statement ends the current `switch` case and exits the `switch`.

Example:

```c
case 1:
    printf("Option 1\n");
    break;
```

Without `break`, execution can continue into the following cases.

This behavior is called **fall-through**.

---

# `default`

The `default` block runs when none of the listed cases match.

Example:

```c
switch(choice)
{
    case 1:
        printf("Option 1\n");
        break;

    case 2:
        printf("Option 2\n");
        break;

    default:
        printf("Invalid choice.\n");
}
```

If `choice` is 5, neither case matches, so:

```text
Invalid choice.
```

is displayed.

---

# Switch Example in `main.c`

The program contains:

```c
switch(choice)
{
    case 1:
        printf("You selected Option 1.\n");
        break;

    case 2:
        printf("You selected Option 2.\n");
        break;

    case 3:
        printf("You selected Option 3.\n");
        break;

    case 4:
        printf("You selected Option 4.\n");
        break;

    default:
        printf("Invalid choice.\n");
}
```

Since:

```c
choice=2;
```

the output is:

```text
You selected Option 2.
```

---

# Another `switch` Example

The program also uses `switch` to represent days of the week.

```c
switch(choice)
{
    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    case 6:
        printf("Saturday\n");
        break;

    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Invalid day.\n");
}
```

With:

```text
choice = 2
```

the output is:

```text
Tuesday
```

---

# Comparison Operators Used in Conditions

Conditional statements commonly use comparison operators.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

Example:

```c
if(age>=18)
{
    printf("Adult\n");
}
```

---

# Logical Operators in Conditions

Conditions can also use logical operators.

```text
&&  → AND
||  → OR
!   → NOT
```

Example:

```c
if(age>=18 && score>=50)
{
    printf("Condition satisfied.\n");
}
```

Both conditions must be true.

---

# `if` vs `switch`

Both can be used to make decisions, but they are commonly used in different situations.

### `if`

Useful for:

* Ranges
* Complex conditions
* Multiple comparisons

Example:

```c
if(score>=70)
{
    printf("Good performance.");
}
```

### `switch`

Useful when comparing one expression against several specific values.

Example:

```c
switch(choice)
{
    case 1:
        printf("Option 1");
        break;

    case 2:
        printf("Option 2");
        break;
}
```

---

# Program Flow

The program in `main.c` demonstrates conditional logic in this order:

```text
Program starts
      ↓
Test an if condition
      ↓
Test if...else
      ↓
Test else if
      ↓
Test nested if
      ↓
Test switch
      ↓
Test another switch
      ↓
Program ends
```

---

# Common Mistakes

## 1. Using `=` Instead of `==`

Incorrect:

```c
if(age=18)
{
    printf("Adult");
}
```

Correct comparison:

```c
if(age==18)
{
    printf("Adult");
}
```

Remember:

```text
=   → assignment
==  → comparison
```

---

## 2. Forgetting Braces

Incorrect:

```c
if(age>=18)
    printf("Adult");
    printf("You can vote.");
```

When multiple statements belong to the condition, braces make the block clear:

```c
if(age>=18)
{
    printf("Adult");
    printf("You can vote.");
}
```

---

## 3. Forgetting `break` in `switch`

Example:

```c
case 1:
    printf("One");

case 2:
    printf("Two");
```

Execution may continue into the next case.

Better:

```c
case 1:
    printf("One");
    break;
```

---

## 4. Forgetting `default`

A `default` case is useful for handling values that do not match any listed case.

```c
default:
    printf("Invalid choice.");
```

---

## 5. Incorrect Condition Order

With:

```c
if(score>=50)
{
    printf("D");
}
else if(score>=70)
{
    printf("B");
}
```

a score of 75 will satisfy the first condition, so the second condition will never be reached.

A better order is from the highest range downward:

```c
if(score>=80)
{
    printf("A");
}
else if(score>=70)
{
    printf("B");
}
else if(score>=60)
{
    printf("C");
}
else if(score>=50)
{
    printf("D");
}
else
{
    printf("F");
}
```

---

# What I Practiced

In `main.c`, I practiced:

* Using `if`.
* Using `if...else`.
* Using `else if`.
* Creating nested `if` statements.
* Using `switch`.
* Using `case`.
* Using `break`.
* Using `default`.
* Using comparison operators in conditions.
* Using `%` to determine even and odd numbers.
* Creating a simple grading system.
* Creating a simple menu using `switch`.

---

# Practice Tasks

Modify the program to practice:

### 1. Age Classification

Create conditions for:

```text
Below 13  → Child
13–19     → Teenager
20–59     → Adult
60+       → Senior
```

### 2. Positive or Negative

Check whether a number is:

```text
Positive
Negative
Zero
```

### 3. Largest of Two Numbers

Compare two numbers and display which one is larger.

### 4. Simple Menu

Create a menu such as:

```text
1. Add
2. Subtract
3. Multiply
4. Divide
```

Use `switch` to perform the selected operation.

---

# Quick Reference

## `if`

```c
if(condition)
{
    statement;
}
```

## `if...else`

```c
if(condition)
{
    statement;
}
else
{
    statement;
}
```

## `else if`

```c
if(condition1)
{
    statement;
}
else if(condition2)
{
    statement;
}
else
{
    statement;
}
```

## Nested `if`

```c
if(condition1)
{
    if(condition2)
    {
        statement;
    }
}
```

## `switch`

```c
switch(choice)
{
    case 1:
        statement;
        break;

    case 2:
        statement;
        break;

    default:
        statement;
}
```

---

# Key Takeaways

1. Conditional statements allow programs to make decisions.
2. `if` executes code when a condition is true.
3. `if...else` provides two possible paths.
4. `else if` allows multiple conditions to be tested.
5. Nested `if` statements allow decisions inside other decisions.
6. `switch` is useful when comparing one value against several specific cases.
7. `break` prevents normal fall-through to the next `case`.
8. `default` handles unmatched `switch` values.
9. Conditions commonly use comparison and logical operators.
10. The order of conditions matters, especially in `else if` chains.

---

# Folder Contents

```text
05-conditional-statements/
├── main.c
└── README.md
```

## Learning Progress

This is the fifth topic in my C programming learning section.

It builds on operators by showing how those operators can be used to make decisions inside a program.

The next topic will introduce **loops**, which allow a program to repeat instructions.
