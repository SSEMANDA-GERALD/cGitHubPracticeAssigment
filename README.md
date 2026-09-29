# C Programming Practice Assignment

This repository contains eight beginner-level C programs covering basic output, input processing, decisions, loops, and interactive programming. Each program includes a title, textbook reference, problem summary, key concepts, a brief explanation of how it works, and a sample run.

repo Link (https://github.com/SSEMANDA-GERALD/cGitHubPracticeAssigment.git)

## 1. Basic Output
### Program title and category
Basic Output — Basic C Programming

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9 (a)

### What the program does
The program prints a simple greeting message, "Have a nice Day", to the screen.

### Main concepts used
- printf
- standard output
- string literals

### How it works
The program includes the standard input/output library and calls `printf` with a message string. The newline escape sequence moves the cursor to the next line after printing the text.

### Example run
```c
Have a nice Day
```

---

## 2. Input, Process, Output
### Program title and category
Input, Process, Output — Basic Arithmetic Operations

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16

### What the program does
The program reads two integers from the user and calculates their sum, difference, quotient, and remainder.

### Main concepts used
- scanf
- integer variables
- arithmetic operators
- printf formatting

### How it works
The program prompts for two numbers, stores them in variables, performs the required calculations using arithmetic operators, and prints each result to the screen.

### Example run
```c
Enter Integer 1: 12

Enter Integer 2: 5

The sum of the two integers, 12 and 5 is 17
The Quotient is: 0
The remainder is: 5
```

---

## 3. Decisions
### Program title and category
Decisions — Even or Odd Check

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.22

### What the program does
The program reads an integer and determines whether it is odd or even.

### Main concepts used
- if...else
- modulus operator `%`
- conditional logic

### How it works
The program reads a number and tests whether dividing it by 2 leaves a remainder of 0. If so, the number is even; otherwise it is odd.

### Example run
```c
Enter the number you wish to Test:
10
The number is even
```

---

## 4. Basic Loop
### Program title and category
Basic Loop — Repetition with a For Loop

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.7 (a)

### What the program does
The program prints the odd numbers from 1 to 13 in sequence.

### Main concepts used
- for loop
- loop control variable
- increment operator
- output formatting

### How it works
The loop starts at 1, keeps printing values while the loop variable is less than or equal to 13, and increases by 2 each time so only odd numbers are displayed.

### Example run
```c
1
3
5
7
9
11
13
```

---

## 5. Loop Calculation
### Program title and category
Loop Calculation — Sum of Numbers, Squares, and Cubes

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 5, Exercise 5.1

### What the program does
The program asks the user for an upper limit and then calculates the sum of all numbers from 1 to that limit, as well as the sum of their squares and cubes.

### Main concepts used
- for loop
- accumulator variables
- arithmetic expressions
- input and output

### How it works
The loop runs from 1 to the user-entered value. Each iteration adds the current number, its square, and its cube to separate total variables. After the loop ends, the program prints the results.

### Example run
```c
Enter an upper limit (natural number): 5

Results for natural numbers from 1 to 5:
Sum: 15
Sum of Squares: 55
Sum of Cubes: 225
```

---

## 6. Loop Input
### Program title and category
Loop Input — Square of Asterisks

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 5, Exercise 5.3

### What the program does
The program repeatedly asks the user for a square size and prints a square made of asterisks until the user enters 0 to exit.

### Main concepts used
- while loop
- nested loops
- validation
- repeated input

### How it works
The program reads a side length and checks whether it is in the valid range from 1 to 20. If valid, it uses nested loops to print rows and columns of `*`. If the user enters 0, the loop terminates.

### Example run
```c
=== Square of Asterisks (Multiple Inputs) ===
Enter the side size (1 to 20), or enter 0 to exit: 3

Square of side 3:
* * *
* * *
* * *

Enter another side size (1-20), or 0 to exit: 0

Program terminated successfully.
```

---

## 7. Loop Decision
### Program title and category
Loop Decision — Largest Number Finder

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.23

### What the program does
The program reads 10 numbers and determines the largest one.

### Main concepts used
- while loop
- decision-making with if
- counters
- comparison operators

### How it works
The program stores the first number as the initial maximum, then loops through the remaining numbers. Each time it compares a new value to the current maximum and updates it if the new value is larger. After all inputs are processed, it prints the largest number.

### Example run
```c
Enter number 1: 14
Enter number 2: 8
Enter number 3: 27
Enter number 4: 3
Enter number 5: 19
Enter number 6: 12
Enter number 7: 31
Enter number 8: 21
Enter number 9: 9
Enter number 10: 16

The largest number entered is: 31
```

---

## 8. Interactive Program
### Program title and category
Interactive Program — Bar-Chart Printing Program

### Textbook reference
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.18

### What the program does
The program asks the user to enter five numbers between 1 and 30 and then prints a horizontal bar chart using asterisks for each value.

### Main concepts used
- for loop
- nested loops
- validation checks
- interactive input/output

### How it works
The program loops five times to read input values. If a value is within the accepted range, it prints a line of asterisks repeated that many times. If the value is invalid, it asks the user to enter a valid number again.

### Example run
```c
Bar-Chart Printing Program
Enter five numbers (each between 1 and 30):

Enter number 1: 5
Bar 1: *****
Enter number 2: 3
Bar 2: ***
Enter number 3: 7
Bar 3: *******
Enter number 4: 2
Bar 4: **
Enter number 5: 4
Bar 5: ****
```

---

## Summary
These programs introduce the building blocks of C programming, including printing output, reading input, making decisions, repeating tasks with loops, and creating interactive programs that respond to user data.
