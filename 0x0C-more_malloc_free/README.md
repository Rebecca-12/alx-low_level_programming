# Project Name: C - More malloc, free

## Table of Contents
- [Description](#description)
- [Tasks](#tasks)
- [Requirements](#requirements)
- [How to Compile](#how-to-compile)
- [Usage](#usage)
- [Author](#author)
- [License](#license)

## Description
This C programming project focuses on memory allocation and manipulation using functions like `malloc`, `free`, `calloc`, `realloc`, and other related concepts. The project consists of several tasks, each designed to improve your understanding of dynamic memory allocation in C.

## Tasks
1. **Trust no one**
   - Write a function that allocates memory using `malloc`.
   
2. **string_nconcat**
   - Write a function that concatenates two strings.

3. **_calloc**
   - Write a function that allocates memory for an array using `calloc`.

4. **array_range**
   - Write a function that creates an array of integers.

5. **_realloc** (Advanced)
   - Write a function that reallocates a memory block using `malloc` and `free`.

6. **We must accept finite disappointment, but never lose infinite hope** (Advanced)
   - Write a program that multiplies two positive numbers.

## Requirements
- Allowed editors: vi, vim, emacs
- Code must be compiled on Ubuntu 20.04 LTS using gcc with specific flags.
- Code should adhere to the Betty style.
- No more than 5 functions per file.
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed.
- Prototypes should be included in a header file called `main.h`.

## How to Compile
To compile the C files for each task, you can use the following format:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <task.c> -o <output>

