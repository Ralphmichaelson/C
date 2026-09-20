# Loops in C

This topic introduces **loops in C**.

Loops allow a program to repeat a block of code multiple times without writing the same statements repeatedly.

The `main.c` file demonstrates:

* `for` loop
* `while` loop
* `do...while` loop
* `break`
* `continue`
* Nested loops
* Using loops for calculations
* Counter variables

---

# What Is a Loop?

A loop is a programming structure that repeats a block of code while a condition is satisfied.

For example:

```c
for(i=1;i<=5;i++)
{
    printf("%d\n",i);
}
```

This prints:

```text
1
2
3
4
5
```

Instead of writing:

```c
printf("1\n");
printf("2\n");
printf("3\n");
printf("4\n");
printf("5\n");
```

a loop allows the same task to be repeated efficiently.

---

# 1. `for` Loop

A `for` loop is commonly used when you know how many times you want to repeat something.

Syntax:

```c
for(initialization;condition;update)
{
    statements;
}
```

Example:

```c
for(i=1;i<=5;i++)
{
    printf("%d\n",i);
}
```

The three parts are:

```text
initialization
      ↓
condition
      ↓
statement
      ↓
update
```

---

# Understanding the `for` Loop

Consider:

```c
for(i=1;i<=5;i++)
{
    printf("%d\n",i);
}
```

### Step 1 — Initialization

```c
i=1;
```

The counter starts at `1`.

### Step 2 — Condition

```c
i<=5
```

The loop continues while the condition is true.

### Step 3 — Execute the Body

```c
printf("%d\n",i);
```

The current value of `i` is displayed.

### Step 4 — Update

```c
i++;
```

The value of `i` increases by 1.

The process repeats until:

```text
i<=5
```

becomes false.

---

# 2. Using a `for` Loop for Calculations

Loops can be used to perform calculations.

The program contains:

```c
for(i=1;i<=5;i++)
{
    printf("%d squared is:%d\n",i,i*i);
}
```

The output is:

```text
1 squared is:1
2 squared is:4
3 squared is:9
4 squared is:16
5 squared is:25
```

The expression:

```c
i*i
```

calculates the square of `i`.

---

# 3. `while` Loop

A `while` loop repeats a block of code while a condition remains true.

Syntax:

```c
while(condition)
{
    statements;
}
```

Example:

```c
count=1;

while(count<=5)
{
    printf("%d\n",count);
    count++;
}
```

Output:

```text
1
2
3
4
5
```

---

# How a `while` Loop Works

The condition is checked **before** the loop body executes.

```text
        Start
          ↓
    Check condition
       /       \
    True       False
     ↓            ↓
  Run body       End
     ↓
  Update
     ↓
  Check again
```

If the condition is initially false, the loop body does not execute.

---

# 4. Counting Down With a `while` Loop

The program also demonstrates counting backwards:

```c
number=5;

while(number>=1)
{
    printf("%d\n",number);
    number--;
}
```

Output:

```text
5
4
3
2
1
```

The decrement operator:

```c
number--;
```

reduces the value by 1 after each iteration.

---

# 5. `do...while` Loop

A `do...while` loop is similar to a `while` loop, but the condition is checked **after** the loop body.

Syntax:

```c
do
{
    statements;
}
while(condition);
```

Example:

```c
count=1;

do
{
    printf("%d\n",count);
    count++;
}
while(count<=5);
```

Output:

```text
1
2
3
4
5
```

---

# Difference Between `while` and `do...while`

### `while`

The condition is checked first:

```c
while(condition)
{
    statements;
}
```

### `do...while`

The statements run first:

```c
do
{
    statements;
}
while(condition);
```

Therefore, a `do...while` loop executes its body **at least once**.

---

# 6. `do...while` Runs at Least Once

The program demonstrates:

```c
number=10;

do
{
    printf("This statement runs at least once.\n");
    number++;
}
while(number<5);
```

Here:

```text
number = 10
```

and:

```text
number < 5
```

is false.

However, the program still prints the message once because the body of a `do...while` loop runs before the condition is checked.

---

# 7. `break`

The `break` statement immediately stops a loop.

Example:

```c
for(i=1;i<=10;i++)
{
    if(i==6)
    {
        break;
    }

    printf("%d\n",i);
}
```

The output is:

```text
1
2
3
4
5
```

When:

```text
i==6
```

becomes true, `break` stops the loop.

---

# How `break` Works

```text
Loop starts
    ↓
Condition checked
    ↓
Run statements
    ↓
break?
 ┌──┴──┐
Yes    No
 ↓      ↓
End    Continue
loop   loop
```

---

# 8. `continue`

The `continue` statement skips the remaining statements in the current iteration and moves to the next iteration.

Example:

```c
for(i=1;i<=10;i++)
{
    if(i==5)
    {
        continue;
    }

    printf("%d\n",i);
}
```

The output is:

```text
1
2
3
4
6
7
8
9
10
```

The value `5` is skipped.

---

# `break` vs `continue`

| Statement  | Purpose                     |
| ---------- | --------------------------- |
| `break`    | Ends the loop completely    |
| `continue` | Skips the current iteration |

Example:

```text
break    → stop the loop
continue → skip this iteration
```

---

# 9. Nested Loops

A loop inside another loop is called a **nested loop**.

Example:

```c
for(x=1;x<=3;x++)
{
    for(y=1;y<=3;y++)
    {
        printf("x=%d y=%d\n",x,y);
    }
}
```

The inner loop runs completely for each iteration of the outer loop.

---

# How Nested Loops Work

For:

```text
x = 1
```

the inner loop produces:

```text
x=1 y=1
x=1 y=2
x=1 y=3
```

Then:

```text
x = 2
```

produces:

```text
x=2 y=1
x=2 y=2
x=2 y=3
```

Then:

```text
x = 3
```

produces:

```text
x=3 y=1
x=3 y=2
x=3 y=3
```

Nested loops are useful for tasks such as:

* Tables
* Grids
* Patterns
* Matrix operations
* Repeated combinations

---

# 10. Using a Loop to Calculate a Sum

Loops can also be used to perform repeated calculations.

The program contains:

```c
sum=0;

for(i=1;i<=10;i++)
{
    sum=sum+i;
}
```

The values are added one at a time:

```text
sum = 0
      ↓
sum = 0 + 1
      ↓
sum = 1 + 2
      ↓
sum = 3 + 3
      ↓
...
      ↓
sum = 55
```

The final result is:

```text
sum is:55
```

---

# Counter Variables

Many loops use a variable to keep track of the current iteration.

Example:

```c
int i;

for(i=1;i<=5;i++)
{
    printf("%d\n",i);
}
```

Here `i` is acting as a counter.

A counter can:

* Start at a specific value
* Increase
* Decrease
* Control how long a loop runs

---

# Comparing the Three Main Loops

| Loop         | Condition Checked | Guaranteed to Run Once? |
| ------------ | ----------------- | ----------------------- |
| `for`        | Before            | No                      |
| `while`      | Before            | No                      |
| `do...while` | After             | Yes                     |

---

# Choosing the Right Loop

### Use `for`

When the number of repetitions is known or easily controlled.

Example:

```c
for(i=1;i<=10;i++)
{
    printf("%d\n",i);
}
```

### Use `while`

When repetition depends on a condition and the number of repetitions may not be known beforehand.

Example:

```c
while(number!=0)
{
    printf("%d\n",number);
    number--;
}
```

### Use `do...while`

When the code should execute at least once before the condition is checked.

Example:

```c
do
{
    printf("Menu\n");
}
while(choice!=0);
```

---

# Common Mistakes

## 1. Forgetting to Update the Counter

Incorrect:

```c
i=1;

while(i<=5)
{
    printf("%d\n",i);
}
```

The value of `i` never changes, so the condition remains true.

This can create an **infinite loop**.

Correct:

```c
i=1;

while(i<=5)
{
    printf("%d\n",i);
    i++;
}
```

---

## 2. Using the Wrong Condition

Example:

```c
for(i=1;i>=5;i++)
{
    printf("%d\n",i);
}
```

The condition:

```text
1 >= 5
```

is false immediately, so the loop never runs.

---

## 3. Forgetting `break`

When using `switch` statements inside loops, forgetting `break` may cause unexpected control flow.

---

## 4. Confusing `break` and `continue`

Remember:

```text
break
→ exits the loop

continue
→ skips the current iteration
```

---

## 5. Creating an Infinite Loop

Example:

```c
while(1)
{
    printf("Hello\n");
}
```

The condition is always true, so the loop continues indefinitely unless something inside the program stops it.

---

# What I Practiced

In `main.c`, I practiced:

* Creating a `for` loop.
* Creating a `while` loop.
* Creating a `do...while` loop.
* Counting upward.
* Counting downward.
* Performing calculations inside loops.
* Using `break`.
* Using `continue`.
* Creating nested loops.
* Using a loop to calculate a sum.
* Using counter variables.
* Understanding the difference between the three main loop types.

---

# Practice Tasks

Modify `main.c` and try the following.

### 1. Print Numbers From 1 to 20

Use a `for` loop.

### 2. Print Even Numbers

Print:

```text
2
4
6
8
10
12
14
16
18
20
```

### 3. Print Odd Numbers

Print:

```text
1
3
5
7
9
11
13
15
17
19
```

### 4. Calculate a Sum

Calculate the sum from 1 to 100.

### 5. Create a Multiplication Table

Use nested or regular loops to display a multiplication table.

### 6. Practice `break`

Create a loop that stops when a specific number is reached.

### 7. Practice `continue`

Create a loop that skips a specific number.

---

# Quick Reference

## `for`

```c
for(i=1;i<=5;i++)
{
    printf("%d\n",i);
}
```

## `while`

```c
while(i<=5)
{
    printf("%d\n",i);
    i++;
}
```

## `do...while`

```c
do
{
    printf("%d\n",i);
    i++;
}
while(i<=5);
```

## `break`

```c
if(i==5)
{
    break;
}
```

## `continue`

```c
if(i==5)
{
    continue;
}
```

## Nested Loop

```c
for(x=1;x<=3;x++)
{
    for(y=1;y<=3;y++)
    {
        printf("x=%d y=%d\n",x,y);
    }
}
```

---

# Key Takeaways

1. Loops repeat a block of code.
2. `for` is useful when the number of repetitions is known.
3. `while` checks its condition before executing the body.
4. `do...while` executes its body before checking the condition.
5. A `do...while` loop therefore runs at least once.
6. `break` stops a loop completely.
7. `continue` skips the current iteration.
8. Nested loops place one loop inside another.
9. Counter variables are commonly used to control loops.
10. Loops can be used for calculations, counting, tables, and repeated tasks.
11. Always make sure a loop has a condition that can eventually become false unless an intentional infinite loop is required.

---

# Folder Contents

```text
06-loops/
├── main.c
└── README.md
```

## Learning Progress

This is the sixth topic in my C programming learning section.

It builds on conditional statements by introducing repetition. With operators, conditions, and loops now understood, the next topics can begin combining these concepts into more useful programs using **functions and arrays**.
