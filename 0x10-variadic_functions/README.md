# Variadic Functions in C

This project explores the concept of variadic functions in the C programming language. Variadic functions allow you to work with a variable number of arguments, making them versatile for handling different types of data. This project includes tasks that demonstrate the usage of variadic functions to perform various operations.

## Table of Contents

- [Task 0: Beauty is variable, ugliness is constant](#task-0-beauty-is-variable-ugliness-is-constant)
- [Task 1: To be is to be the value of a variable](#task-1-to-be-is-to-be-the-value-of-a-variable)
- [Task 2: One woman's constant is another woman's variable](#task-2-one-womans-constant-is-another-womans-variable)
- [Task 3: To be is a to be the value of a variable](#task-3-to-be-is-a-to-be-the-value-of-a-variable)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Task 0: Beauty is variable, ugliness is constant

In this task, we implement a function that returns the sum of all its parameters. The function takes a variable number of arguments and returns their sum.

## Task 1: To be is to be the value of a variable

This task involves writing a function that prints numbers followed by a new line. The function accepts a separator string and a variable number of integers to print.

## Task 2: One woman's constant is another woman's variable

In this task, we create a function that prints strings followed by a new line. Similar to Task 1, this function also accepts a separator string and a variable number of strings to print. It handles NULL strings by printing "(nil)".

## Task 3: To be is a to be the value of a variable

Task 3 requires the implementation of a function that prints values of different types based on a format string. The format string specifies the types of arguments, including characters, integers, floats, and strings.

## Usage

To compile and run the code for each task, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o task0
./task0

