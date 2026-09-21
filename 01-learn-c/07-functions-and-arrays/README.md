# Functions and Arrays in C

This topic introduces **functions and arrays in C**.

Functions allow a program to divide a large task into smaller reusable blocks, while arrays allow a program to store multiple values of the same data type under one variable name.

The `main.c` file demonstrates:

* Function definition
* Function calls
* Parameters
* Return values
* Passing values to functions
* Declaring arrays
* Initializing arrays
* Accessing array elements
* Array indexes
* Traversing arrays using loops
* Passing arrays to functions
* Calculating the sum of array elements
* Finding the largest value in an array

---

# 1. What Is a Function?

A function is a block of code designed to perform a particular task.

Instead of writing the same instructions repeatedly, we can place them inside a function and call the function whenever needed.

Example:

```c
int add(int a,int b)
{
	int sum;

	sum=a+b;

	return sum;
}
```

This function receives two numbers, adds them, and returns the result.

---

# 2. Why Use Functions?

Functions help to:

* Break a program into smaller parts
* Reuse code
* Make programs easier to understand
* Reduce repeated code
* Make programs easier to maintain
* Separate different tasks

For example, instead of calculating addition directly inside `main()`, we can create:

```c
int add(int a,int b)
{
	int sum;

	sum=a+b;

	return sum;
}
```

and then call it when needed.

---

# 3. Defining a Function

A function generally contains:

```text
return type
      ↓
function name
      ↓
parameters
      ↓
function body
```

Example:

```c
int add(int a,int b)
{
	int sum;

	sum=a+b;

	return sum;
}
```

Here:

```text
int
↓
Return type

add
↓
Function name

a,b
↓
Parameters
```

---

# 4. Function Parameters

Parameters are values that are passed into a function.

Example:

```c
int add(int a,int b)
```

The function has two parameters:

```text
a
b
```

When the function is called:

```c
result=add(a,b);
```

the values stored in `a` and `b` from `main()` are passed to the function.

---

# 5. Calling a Function

Defining a function does not automatically execute it.

The function must be called.

Example:

```c
result=add(a,b);
```

The program:

1. Sends the values to `add()`.
2. Executes the statements inside `add()`.
3. Calculates the sum.
4. Returns the result.
5. Stores the returned value in `result`.

---

# 6. Return Values

A function can return a value to the part of the program that called it.

Example:

```c
int add(int a,int b)
{
	int sum;

	sum=a+b;

	return sum;
}
```

The statement:

```c
return sum;
```

sends the value back to the calling statement.

For example:

```c
result=add(a,b);
```

If:

```text
a = 10
b = 5
```

then:

```text
sum = 15
```

and:

```text
result = 15
```

---

# 7. Another Function Example

The program also contains:

```c
int multiply(int a,int b)
{
	int product;

	product=a*b;

	return product;
}
```

This function multiplies two values.

Calling it:

```c
result=multiply(a,b);
```

with:

```text
a = 10
b = 5
```

produces:

```text
product = 50
```

---

# 8. What Is an Array?

An array is a collection of values of the **same data type** stored under one variable name.

For example:

```c
int numbers[5];
```

creates an integer array capable of storing five integer values.

Instead of creating:

```c
int number1;
int number2;
int number3;
int number4;
int number5;
```

we can use:

```c
int numbers[5];
```

---

# 9. Initializing an Array

An array can be initialized when it is declared.

Example from `main.c`:

```c
int numbers[5]={10,20,30,40,50};
```

The array contains:

```text
10
20
30
40
50
```

---

# 10. Array Indexes

Array indexes are used to access individual elements.

An important rule is:

> Array indexing starts from `0`.

For:

```c
int numbers[5]={10,20,30,40,50};
```

the elements are:

| Index | Value |
| ----- | ----: |
| `0`   |  `10` |
| `1`   |  `20` |
| `2`   |  `30` |
| `3`   |  `40` |
| `4`   |  `50` |

Therefore:

```c
numbers[0]
```

contains:

```text
10
```

and:

```c
numbers[4]
```

contains:

```text
50
```

---

# 11. Accessing Array Elements

The program displays individual elements:

```c
printf("First element is:%d\n",numbers[0]);
printf("Second element is:%d\n",numbers[1]);
printf("Third element is:%d\n",numbers[2]);
printf("Fourth element is:%d\n",numbers[3]);
printf("Fifth element is:%d\n",numbers[4]);
```

This demonstrates direct access to array elements.

---

# 12. Traversing an Array

Traversing an array means visiting its elements one by one.

A loop is commonly used for this.

Example:

```c
for(i=0;i<size;i++)
{
	printf("%d ",numbers[i]);
}
```

The loop starts at:

```text
i = 0
```

and continues while:

```text
i < size
```

Each iteration accesses:

```c
numbers[i]
```

---

# 13. Passing an Array to a Function

Arrays can be passed to functions.

The program contains:

```c
void displayArray(int numbers[],int size)
{
	int i;

	for(i=0;i<size;i++)
	{
		printf("%d ",numbers[i]);
	}
}
```

The function receives:

```text
numbers
size
```

It then uses a loop to display the array elements.

The function is called using:

```c
displayArray(numbers,5);
```

---

# 14. Function for Finding the Sum

The program contains:

```c
int sumArray(int numbers[],int size)
{
	int i;
	int sum;

	sum=0;

	for(i=0;i<size;i++)
	{
		sum=sum+numbers[i];
	}

	return sum;
}
```

This function calculates the total of all the values in the array.

For:

```text
10
20
30
40
50
```

the calculation is:

```text
10 + 20 + 30 + 40 + 50
```

which gives:

```text
150
```

---

# 15. Function for Finding the Largest Value

The program also contains:

```c
int largestArray(int numbers[],int size)
{
	int i;
	int largest;

	largest=numbers[0];

	for(i=1;i<size;i++)
	{
		if(numbers[i]>largest)
		{
			largest=numbers[i];
		}
	}

	return largest;
}
```

The function starts by assuming the first element is the largest:

```c
largest=numbers[0];
```

It then compares the remaining elements with `largest`.

If a larger value is found:

```c
if(numbers[i]>largest)
{
	largest=numbers[i];
}
```

the value of `largest` is updated.

For:

```text
10 20 30 40 50
```

the final result is:

```text
50
```

---

# 16. Functions and Arrays Working Together

The most important idea in this topic is that functions and arrays can work together.

The program passes the same array to different functions:

```c
displayArray(numbers,5);
```

```c
total=sumArray(numbers,5);
```

```c
largest=largestArray(numbers,5);
```

This allows different functions to perform different tasks using the same data.

```text
             numbers[]
                 │
        ┌────────┼────────┐
        ↓        ↓        ↓
 displayArray  sumArray  largestArray
        ↓        ↓        ↓
     Display     Sum     Largest
```

---

# 17. Complete Program Flow

The program works in this order:

```text
Program starts
      ↓
Create variables
      ↓
Create functions
      ↓
Create array
      ↓
Call add()
      ↓
Display sum
      ↓
Call multiply()
      ↓
Display product
      ↓
Access array elements
      ↓
Call displayArray()
      ↓
Display all elements
      ↓
Call sumArray()
      ↓
Calculate array sum
      ↓
Call largestArray()
      ↓
Find largest value
      ↓
Program ends
```

---

# Common Mistakes

## 1. Using the Wrong Array Index

Incorrect:

```c
numbers[5]
```

for an array declared as:

```c
int numbers[5];
```

Valid indexes are:

```text
0
1
2
3
4
```

Index `5` is outside the array.

---

## 2. Starting Array Traversal at `1`

Usually, traversal should begin at index `0`:

```c
for(i=0;i<size;i++)
{
	printf("%d ",numbers[i]);
}
```

Starting at `1` would skip the first element.

---

## 3. Using a Wrong Array Size

If an array contains five elements:

```c
int numbers[5];
```

its valid indexes are:

```text
0 to 4
```

The size and valid index range should always be understood correctly.

---

## 4. Forgetting the Return Value

A function such as:

```c
int add(int a,int b)
```

should return an integer value.

Example:

```c
return sum;
```

---

## 5. Forgetting to Call the Function

Defining:

```c
int add(int a,int b)
{
	...
}
```

does not execute the function.

It must be called:

```c
result=add(a,b);
```

---

## 6. Forgetting to Update the Loop Variable

When traversing an array:

```c
for(i=0;i<size;i++)
```

the value of `i` changes using:

```text
i++
```

Without an appropriate update, a loop may not behave as intended.

---

# Functions vs Arrays

| Concept      | Purpose                                 |
| ------------ | --------------------------------------- |
| Function     | Performs a specific task                |
| Parameter    | Receives a value passed to a function   |
| Return value | Sends a result back from a function     |
| Array        | Stores multiple values of the same type |
| Index        | Identifies an array element             |
| Loop         | Often used to traverse an array         |

---

# What I Practiced

In `main.c`, I practiced:

* Creating functions.
* Defining functions.
* Calling functions.
* Passing parameters.
* Returning values.
* Creating an integer array.
* Initializing an array.
* Accessing array elements.
* Understanding array indexes.
* Traversing an array using a loop.
* Passing an array to a function.
* Calculating the sum of an array.
* Finding the largest array value.
* Combining functions, arrays, loops, and conditions.

---

# Practice Tasks

Modify `main.c` and try the following.

### 1. Create a Subtraction Function

Create:

```c
int subtract(int a,int b)
```

and return the difference.

### 2. Create a Division Function

Create a function that divides two numbers.

### 3. Find the Smallest Array Value

Create a function that finds the smallest element in an array.

### 4. Calculate the Average

Create a function that calculates the average of the array values.

### 5. Count Even Numbers

Create a function that counts how many values in an array are even.

### 6. Change the Array

Try:

```c
int numbers[5]={5,15,25,35,45};
```

and observe how the results change.

---

# Quick Reference

## Function

```c
int add(int a,int b)
{
	int sum;

	sum=a+b;

	return sum;
}
```

## Function Call

```c
result=add(a,b);
```

## Array

```c
int numbers[5]={10,20,30,40,50};
```

## Accessing an Element

```c
printf("%d",numbers[0]);
```

## Traversing an Array

```c
for(i=0;i<size;i++)
{
	printf("%d ",numbers[i]);
}
```

## Passing an Array to a Function

```c
displayArray(numbers,5);
```

---

# Key Takeaways

1. Functions divide programs into smaller reusable tasks.
2. A function can receive values through parameters.
3. A function can return a value.
4. Functions must be called before their code is executed.
5. Arrays store multiple values of the same data type.
6. Array indexing begins at `0`.
7. A five-element array has indexes `0` through `4`.
8. Loops are commonly used to traverse arrays.
9. Arrays can be passed to functions.
10. Functions and arrays can work together to organize and process data.
11. Conditions inside loops can be used to search for values such as the largest element.
12. Combining functions, arrays, loops, and conditions allows programs to become more organized and useful.

---

# Folder Contents

```text
07-functions-and-arrays/
├── main.c
└── README.md
```

## Learning Progress

This is the seventh topic in my C programming learning section.

It combines **functions and arrays** with concepts already learned from variables, operators, conditions, and loops.

The next topic will introduce **strings and pointers**, building further on arrays and memory-related concepts.
