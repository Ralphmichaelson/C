# File Handling & Final C Mini Project 📁

This folder focuses on **file handling in C** and brings together many of the concepts learned throughout the previous C topics.

The `main.c` file contains a simple **Student Record System** that allows the user to:

* Add student records
* Save student records to a file
* Display saved student records
* Exit the program

This final project combines structures, functions, strings, loops, conditions, switch statements, and file handling.

---

# 📌 What Is File Handling?

File handling allows a C program to store and retrieve information from files.

Normally, data stored in variables exists only while the program is running.

For example:

```c
int age=20;
```

Once the program ends, the value stored in `age` is lost.

A file allows information to be stored so that it can be accessed again later.

---

# 1. The `FILE` Pointer

C uses a `FILE` pointer to work with files.

Example:

```c
FILE *file;
```

The variable `file` is used to refer to the file being opened.

---

# 2. Opening a File

The `fopen()` function is used to open a file.

Example:

```c
file=fopen("students.txt","a");
```

The first argument is the filename:

```text
students.txt
```

The second argument is the file mode:

```text
"a"
```

---

# 3. File Modes

Some common file modes are:

| Mode  | Purpose                                |
| ----- | -------------------------------------- |
| `"r"` | Opens a file for reading               |
| `"w"` | Opens a file for writing               |
| `"a"` | Opens a file for adding/appending data |

### `"r"` — Read

```c
file=fopen("students.txt","r");
```

Used when we want to read existing information.

### `"w"` — Write

```c
file=fopen("students.txt","w");
```

Used to write information to a file.

If the file already exists, its previous contents can be replaced.

### `"a"` — Append

```c
file=fopen("students.txt","a");
```

Used to add new information to the end of an existing file.

If the file does not exist, it can be created.

---

# 4. Checking Whether a File Opened

A file might fail to open.

For example:

```c
file=fopen("students.txt","r");

if(file==NULL)
{
    printf("No student records found.\n");
    return;
}
```

`NULL` means that the file was not successfully opened.

Checking for `NULL` helps prevent the program from trying to use an invalid file pointer.

---

# 5. Writing to a File

The `fprintf()` function can be used to write formatted information to a file.

Example:

```c
fprintf(file,"%s %d %.2f\n",
    student.name,
    student.age,
    student.marks);
```

The information stored in the structure is written into:

```text
students.txt
```

For example, the file might contain:

```text
Michael 20 78.50
John 21 82.00
```

---

# 6. Reading From a File

The `fscanf()` function can be used to read formatted information from a file.

Example:

```c
fscanf(file,"%s %d %f",
    student.name,
    &student.age,
    &student.marks);
```

The program reads the stored information and places it into the structure.

---

# 7. Reading Multiple Records

The program uses a `while` loop to continue reading records until there is no more information.

```c
while(fscanf(file,"%s %d %f",
    student.name,
    &student.age,
    &student.marks)==3)
{
    printf("\nName:%s\n",student.name);
    printf("Age:%d\n",student.age);
    printf("Marks:%.2f\n",student.marks);
}
```

The condition:

```c
==3
```

means that the program expects three values to be successfully read:

```text
name
age
marks
```

The loop continues while all three values are successfully read.

---

# 8. Closing a File

After working with a file, it should be closed using:

```c
fclose(file);
```

For example:

```c
fprintf(file,"%s %d %.2f\n",
    student.name,
    student.age,
    student.marks);

fclose(file);
```

Closing the file is important because it releases the resources being used by the program.

---

# 9. Structures in the Final Project

The program uses a structure to represent a student.

```c
struct Student
{
    char name[30];
    int age;
    float marks;
};
```

Each student has:

```text
Name
Age
Marks
```

A structure makes it possible to keep related information together.

---

# 10. Functions in the Final Project

The program contains two functions:

```c
void addStudent()
```

and:

```c
void displayStudents()
```

### `addStudent()`

This function:

1. Opens the file in append mode.
2. Gets student information from the user.
3. Saves the information to the file.
4. Closes the file.

### `displayStudents()`

This function:

1. Opens the file in read mode.
2. Checks whether the file exists.
3. Reads student records.
4. Displays the records.
5. Closes the file.

Using functions keeps the program organized.

---

# 11. Adding a Student

The user selects:

```text
1. Add Student
```

The program then asks:

```text
Enter name:
Enter age:
Enter marks:
```

For example:

```text
Enter name: Michael
Enter age: 20
Enter marks: 78.5
```

The information is then saved to the file.

---

# 12. Displaying Students

The user selects:

```text
2. Display Students
```

The program opens:

```text
students.txt
```

and reads the saved records.

Example:

```text
===== STUDENT RECORDS =====

Name:Michael
Age:20
Marks:78.50
```

If multiple students have been saved, all the records are displayed.

---

# 13. The Menu System

The program uses a `do...while` loop to keep displaying the menu.

```c
do
{
    printf("\n1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        ...
    }

}
while(choice!=3);
```

The program continues running until the user chooses:

```text
3. Exit
```

---

# 14. Switch Statement

The `switch` statement handles the user's choice.

```c
switch(choice)
{
    case 1:
        addStudent();
        break;

    case 2:
        displayStudents();
        break;

    case 3:
        printf("\nExiting program...\n");
        break;

    default:
        printf("\nInvalid choice.\n");
}
```

Each choice performs a different action.

---

# 15. How the Program Works

The overall process can be visualized as:

```text
                 START
                   │
                   ▼
          Display Main Menu
                   │
          ┌────────┼────────┐
          ▼        ▼        ▼
       Add       Display    Exit
      Student    Students
          │        │
          ▼        ▼
       Write     Read
       File      File
          │        │
          └────┬───┘
               │
               ▼
          Display Menu
               │
               ▼
        Continue until 3
```

---

# 16. Concepts Combined in the Project

This project combines many concepts from the previous topics.

```text
C Concepts
│
├── Variables
│
├── Data Types
│
├── Input and Output
│
├── Operators
│
├── Conditional Statements
│
├── Loops
│
├── Functions
│
├── Arrays / Strings
│
├── Structures
│
└── File Handling
```

This demonstrates how individual C concepts can work together to create a useful program.

---

# 17. Important Functions Used

| Function    | Purpose                          |
| ----------- | -------------------------------- |
| `printf()`  | Displays output                  |
| `scanf()`   | Gets input                       |
| `strcpy()`  | Copies strings                   |
| `fopen()`   | Opens a file                     |
| `fprintf()` | Writes formatted data to a file  |
| `fscanf()`  | Reads formatted data from a file |
| `fclose()`  | Closes a file                    |

---

# 18. Common Mistakes

### 1. Forgetting to open the file

Before reading or writing, the file must be opened.

```c
file=fopen("students.txt","a");
```

---

### 2. Forgetting to close the file

Always close the file after finishing:

```c
fclose(file);
```

---

### 3. Using the wrong file mode

Use the appropriate mode depending on what you want to do.

```text
"r" → read
"w" → write
"a" → append
```

---

### 4. Not checking for `NULL`

Always check whether the file opened successfully.

```c
if(file==NULL)
{
    printf("Error opening file.\n");
    return;
}
```

---

### 5. Using the wrong format specifier

The data types must match their format specifiers.

```text
%s → string
%d → integer
%f → float
```

For example:

```c
fprintf(file,"%s %d %.2f\n",
    student.name,
    student.age,
    student.marks);
```

---

# 🧪 What I Practiced

In `main.c`, I practiced:

* Creating and using structures
* Creating functions
* Using strings
* Getting user input
* Using `switch`
* Using `do...while`
* Opening files
* Reading files
* Writing files
* Appending data to files
* Checking for `NULL`
* Closing files
* Reading multiple records
* Building a menu-driven program
* Combining multiple C concepts into one project

---

# 🎯 Practice Tasks

### Task 1 — Add More Student Information

Modify the program to include:

```text
Student ID
Name
Age
Marks
```

Save all four pieces of information in the file.

---

### Task 2 — Search for a Student

Add an option:

```text
4. Search Student
```

Allow the user to enter a student's name and search the file for that student.

---

### Task 3 — Calculate Average Marks

Add an option that reads all students and calculates their average marks.

---

### Task 4 — Add More Menu Options

Extend the menu with features such as:

```text
1. Add Student
2. Display Students
3. Search Student
4. Calculate Average
5. Exit
```

This will give you additional practice with functions, loops, structures, conditions, and file handling.

---

# 🔑 Key Takeaways

1. **File handling** allows programs to store data permanently.
2. `fopen()` opens a file.
3. `"r"` is used for reading.
4. `"w"` is used for writing.
5. `"a"` is used for appending.
6. `fprintf()` writes formatted data to a file.
7. `fscanf()` reads formatted data from a file.
8. `fclose()` closes an opened file.
9. Always check whether `fopen()` returned `NULL`.
10. Functions help divide a program into manageable parts.
11. Structures allow related information to be grouped together.
12. A menu-driven program can combine many C concepts into one practical application.
13. File handling is useful when information needs to remain available after the program closes.

---

# 🏁 C Learning Roadmap Completed

With this topic, the **10-topic C learning section is complete**.

```text
01. Introduction to C
        ↓
02. Variables and Data Types
        ↓
03. Input and Output
        ↓
04. Operators
        ↓
05. Conditional Statements
        ↓
06. Loops
        ↓
07. Functions and Arrays
        ↓
08. Strings and Pointers
        ↓
09. Structures, Unions and Enumerations
        ↓
10. File Handling & Final Mini Project
        ↓
       🏁
```

You have now covered the major foundations of C programming and practiced combining them into a complete program.

---

## 📁 Folder Contents

```text
10-file-handling-and-mini-project/
├── main.c
├── README.md
└── students.txt
```

`main.c` contains the Student Record System, `README.md` explains the concepts used, and `students.txt` is created by the program when student records are saved.

---

## 🚀 What's Next?

The **C fundamentals section is now complete**.

The next stage can focus on applying these skills through **small C projects and problem-solving exercises**, rather than continuing to add large amounts of theory.

That will give you a chance to strengthen what you've learned and build confidence writing programs from scratch.