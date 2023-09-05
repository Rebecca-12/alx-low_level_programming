# 0x0B. C - malloc, free

This is a C programming project that focuses on memory allocation and manipulation using `malloc` and `free`.

## Table of Contents
* [Description](#description)
* [Project Tasks](#project-tasks)
* [Requirements](#requirements)
* [Usage](#usage)
* [File Descriptions](#file-descriptions)
* [Author](#author)
* [License](#license)

## Description

In this project, we explore the concepts of dynamic memory allocation using `malloc` and memory deallocation using `free`. The tasks involve creating functions that allocate memory, duplicate strings, concatenate strings, and manipulate 2D arrays.

## Project Tasks

The project consists of the following tasks:

1. **Float like a butterfly, sting like a bee**: Write a function that creates an array of chars and initializes it with a specific char.

2. **The woman who has no imagination has no wings**: Write a function that returns a pointer to a newly allocated space in memory, containing a copy of a given string.

3. **He who is not courageous enough to take risks will accomplish nothing in life**: Write a function that concatenates two strings.

4. **It's not bragging if you can back it up**: Write a function that allocates memory for a 2-dimensional array of integers and initializes it to zero.

5. **It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe (Advanced)**: Write a function that concatenates all the arguments of your program.

6. **I will show you how great I am (Advanced)**: Write a function that splits a string into words.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- Code should follow the Betty style and be well-documented.
- No global variables should be used.
- Limited to a maximum of 5 functions per file.
- Only allowed standard library functions are `malloc` and `free`.
- Function prototypes should be included in a header file called `main.h`.

## Usage

To compile and test these functions, you can use the provided test files and the following commands:

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o create_array
$ ./create_array

