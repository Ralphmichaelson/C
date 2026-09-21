# Structures, Unions and Enumerations in C 🧩

This folder focuses on three important concepts in C:

* **Structures**
* **Unions**
* **Enumerations**

These features allow us to organize related data, store different types of data, and create meaningful names for integer constants.

The `main.c` file demonstrates how each of these concepts works using simple examples.

---

## 📌 What Are Structures, Unions and Enumerations?

C provides different ways of organizing and representing data.

### Structure

A `struct` groups different variables together under one name.

For example, a student can have:

```text
Name
Age
Marks
```

These values can be stored inside one structure.

### Union

A `union` allows different variables to share the same memory location.

Only one member is normally used to hold a meaningful value at a time.

### Enumeration

An `enum` gives names to integer constants.

For example:

```text
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
```

This makes programs easier to understand.

---

# 1. Structures

A structure is created using the `struct` keyword.

Example:

```c
struct Student
{
    char name[30];
    int age;
    float marks;
};
```

This creates a structure called `Student`.

It contains three members:

```text
name  → character array
age   → integer
marks → floating-point number
```

---

# 2. Declaring a Structure Variable

After creating a structure, we can create a variable using that structure.

Example:

```c
struct Student student;
```

Here:

* `struct Student` is the structure type.
* `student` is the variable.

---

# 3. Accessing Structure Members

The dot `.` operator is used to access members of a structure.

Example:

```c
student.age=20;
student.marks=78.5;
```

To display the values:

```c
printf("Age:%d\n",student.age);
printf("Marks:%.2f\n",student.marks);
```

For the character array:

```c
strcpy(student.name,"Michael");
```

Then:

```c
printf("Name:%s\n",student.name);
```

---

# 4. Structure Example

The program creates a student structure:

```c
struct Student
{
    char name[30];
    int age;
    float marks;
};
```

Then values are assigned:

```c
strcpy(student.name,"Michael");
student.age=20;
student.marks=78.5;
```

The result is displayed using:

```c
printf("Name:%s\n",student.name);
printf("Age:%d\n",student.age);
printf("Marks:%.2f\n",student.marks);
```

---

# 5. Arrays of Structures

We can create an array containing multiple structures.

Example:

```c
struct Student students[2];
```

This creates space for two `Student` structures.

We can access each structure using an index.

For example:

```c
students[0].age=20;
students[1].age=21;
```

The first student has index `0`.

The second student has index `1`.

---

## Example

```c
strcpy(students[0].name,"Michael");
students[0].age=20;
students[0].marks=78.5;

strcpy(students[1].name,"John");
students[1].age=21;
students[1].marks=82.0;
```

This allows the program to store information for multiple students.

---

# 6. What Is a Union?

A union is similar to a structure, but its members share the same memory location.

A union is created using the `union` keyword.

Example:

```c
union Data
{
    int number;
    float decimal;
    char letter;
};
```

This union has three members:

```text
number  → int
decimal → float
letter  → char
```

Unlike a structure, these members use the same memory space.

---

# 7. Using a Union

A union variable can be created like this:

```c
union Data data;
```

We can assign a value:

```c
data.number=100;
```

Then display it:

```c
printf("Integer value:%d\n",data.number);
```

We can then assign another member:

```c
data.decimal=25.5;
```

And another:

```c
data.letter='A';
```

Because the members share memory, assigning a new member can overwrite the value previously stored by another member.

---

# 8. Structure vs Union

The main difference is how memory is allocated.

### Structure

Each member has its own memory space.

```text
Structure
┌──────────────┐
│ name         │
├──────────────┤
│ age          │
├──────────────┤
│ marks        │
└──────────────┘
```

All members can contain meaningful values at the same time.

### Union

Members share the same memory location.

```text
Union
┌──────────────┐
│ number       │
│ decimal      │
│ letter       │
└──────────────┘
       ↑
  same memory
```

Only one member should normally be treated as the active stored value at a time.

---

# 9. What Is an Enumeration?

An enumeration, or `enum`, is used to create named integer constants.

Example:

```c
enum Day
{
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
```

The values become:

```text
MONDAY    = 1
TUESDAY   = 2
WEDNESDAY = 3
THURSDAY  = 4
FRIDAY    = 5
SATURDAY  = 6
SUNDAY    = 7
```

Because only `MONDAY` is assigned `1`, the following values increase automatically.

---

# 10. Declaring an Enumeration Variable

We can create an enumeration variable:

```c
enum Day today;
```

Then assign a value:

```c
today=WEDNESDAY;
```

The program can now use the meaningful name `WEDNESDAY` instead of simply using the number `3`.

---

# 11. Enumeration with `if`

An enumeration can be used in conditional statements.

Example:

```c
today=WEDNESDAY;

if(today==WEDNESDAY)
{
    printf("Today is Wednesday.\n");
}
```

This makes the condition easier to understand.

Compare:

```c
if(today==3)
```

with:

```c
if(today==WEDNESDAY)
```

The second version clearly communicates what the value represents.

---

# 12. Enumeration with `switch`

Enumerations can also be used with a `switch` statement.

Example:

```c
switch(today)
{
    case MONDAY:
        printf("Monday\n");
        break;

    case TUESDAY:
        printf("Tuesday\n");
        break;

    case WEDNESDAY:
        printf("Wednesday\n");
        break;

    default:
        printf("Invalid day\n");
}
```

This allows the program to perform different actions depending on the enumeration value.

---

# 13. Using `string.h`

The program uses:

```c
#include<string.h>
```

This is required because we use the `strcpy()` function.

For example:

```c
strcpy(student.name,"Michael");
```

`strcpy()` copies a string into a character array.

---

# 14. Complete Structure of the Program

The program contains three main data types:

```text
C Data Organization
│
├── Structure
│   └── struct Student
│       ├── name
│       ├── age
│       └── marks
│
├── Union
│   └── union Data
│       ├── number
│       ├── decimal
│       └── letter
│
└── Enumeration
    └── enum Day
        ├── MONDAY
        ├── TUESDAY
        ├── WEDNESDAY
        ├── ...
        └── SUNDAY
```

---

# 15. Important Operators and Keywords

### `struct`

Creates a structure.

```c
struct Student
{
    int age;
};
```

### `union`

Creates a union.

```c
union Data
{
    int number;
};
```

### `enum`

Creates an enumeration.

```c
enum Day
{
    MONDAY=1
};
```

### `.`

Accesses a member of a structure or union.

```c
student.age
```

### `strcpy()`

Copies a string.

```c
strcpy(student.name,"Michael");
```

---

# 🧠 Key Differences

| Feature                         | Structure            | Union                          | Enumeration                        |
| ------------------------------- | -------------------- | ------------------------------ | ---------------------------------- |
| Keyword                         | `struct`             | `union`                        | `enum`                             |
| Main purpose                    | Groups related data  | Shares memory between members  | Creates named integer constants    |
| Members                         | Have separate memory | Share memory                   | Named constants                    |
| Multiple members usable at once | Yes                  | Normally one active member     | Values represent integer constants |
| Example                         | Student information  | Different data representations | Days of the week                   |

---

# 🧩 Parent and Member Relationship

A structure can be visualized as:

```text
struct Student
       │
       ├── name
       ├── age
       └── marks
```

The structure is the main data type, while `name`, `age`, and `marks` are its members.

For example:

```c
student.age
```

means:

```text
student → age
```

---

# ⚠️ Common Mistakes

### 1. Forgetting `struct`

Incorrect:

```c
Student student;
```

Correct:

```c
struct Student student;
```

---

### 2. Using the wrong member operator

For a normal structure variable:

```c
student.age
```

The dot `.` operator is used.

---

### 3. Forgetting `strcpy()`

For a character array:

```c
char name[30];
```

A string should not be assigned like this:

```c
name="Michael";
```

Instead:

```c
strcpy(name,"Michael");
```

---

### 4. Expecting a union to store all values at once

A union shares memory between its members.

For example:

```c
data.number=100;
data.decimal=25.5;
```

The second assignment can overwrite the data previously stored in `number`.

---

### 5. Confusing enum names with strings

This:

```c
WEDNESDAY
```

is an enumeration constant.

It is not a string such as:

```c
"Wednesday"
```

---

# 🧪 What I Practiced

In `main.c`, I practiced:

* Creating a structure using `struct`
* Creating structure variables
* Creating arrays of structures
* Accessing structure members using `.`
* Storing different data types in a structure
* Using `strcpy()` with structure members
* Creating a union using `union`
* Assigning values to union members
* Understanding shared memory in unions
* Creating an enumeration using `enum`
* Assigning enumeration values
* Using enumerations with `if`
* Using enumerations with `switch`
* Understanding the differences between structures, unions, and enumerations

---

# 🎯 Practice Tasks

Try these exercises after studying the example.

### Task 1 — Employee Structure

Create a structure called `Employee` containing:

```text
name
age
salary
```

Create one employee and display the information.

---

### Task 2 — Multiple Employees

Create an array of three employees.

Store and display:

```text
Name
Age
Salary
```

for each employee.

---

### Task 3 — Union

Create a union containing:

```text
int
float
char
```

Assign a value to each member and observe what happens when a new member is assigned.

---

### Task 4 — Enumeration

Create:

```c
enum TrafficLight
```

with:

```text
RED
YELLOW
GREEN
```

Use a `switch` statement to display the selected light.

---

# 🔑 Key Takeaways

1. A **structure** groups related variables under one name.
2. Structure members can have different data types.
3. The `.` operator is used to access structure members.
4. Arrays can contain multiple structures.
5. A **union** allows different members to share the same memory location.
6. Assigning one union member can overwrite another member's value.
7. An **enumeration** creates named integer constants.
8. `enum` values make programs easier to read and understand.
9. Structures, unions, and enumerations are useful tools for organizing data in C.
10. `strcpy()` can be used to copy strings into character arrays.

---

## 📁 Folder Contents

```text
09-structures-unions-enumerations/
├── main.c
└── README.md
```

`main.c` contains the practical examples, while this `README.md` explains the concepts demonstrated in the program.

---

## 🚀 Next Step

After completing this topic, the next major topic in the C roadmap will be **Topic 10**, where we will bring together important C concepts into a final practical topic.
