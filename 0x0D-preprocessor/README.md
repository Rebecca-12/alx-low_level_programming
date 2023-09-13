# 0x0D. C - Preprocessor

## Overview
This project explores the use of preprocessor macros in the C programming language. It consists of several tasks that involve creating macros, working with header files, and understanding various aspects of the C preprocessor.

## Table of Contents
- [Tasks](#tasks)
  - [Object-like Macro](#object-like-macro)
  - [Pi](#pi)
  - [File Name](#file-name)
  - [Function-like Macro](#function-like-macro)
  - [SUM](#sum)
- [Requirements](#requirements)
- [Usage](#usage)
- [Contributors](#contributors)
- [License](#license)

## Tasks

### Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

### Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

### File Name
Write a program that prints the name of the file it was compiled from, followed by a new line.

### Function-like Macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.

### SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

## Requirements
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with specific options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the folder is mandatory
- Code should follow the Betty style
- No global variables allowed
- No more than 5 functions per file
- Only allowed C standard library functions are malloc, free, and exit
- Use of _putchar is allowed
- Header files should be include guarded

## Usage
To compile and test the code for each task, follow these steps:

1. Navigate to the task's directory, e.g., `0x0D-preprocessor`.
2. Compile the code using the provided compilation command.
3. Run the compiled program.

Example:
```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
./a

