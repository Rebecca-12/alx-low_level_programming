# 0x0E-structures_typedef

This is a project for the ALX School low-level programming track. It focuses on understanding and working with C structures and typedefs.

## Description

In this project, we define a new type `struct dog` with the following elements:
- `name` (a pointer to a character string)
- `age` (a floating-point number)
- `owner` (a pointer to a character string)

We also create a new type alias `dog_t` for the `struct dog` type.

The project includes several tasks:
1. Define and use the `struct dog` type.
2. Implement functions to initialize, print, create, and free `struct dog` objects.
3. Demonstrate the use of the `dog_t` type alias.

## Files

- `dog.h`: Header file containing the `struct dog` definition, `dog_t` type alias, and function prototypes.
- `0-main.c`: Test program for Task 0.
- `1-init_dog.c`: Implementation of the `init_dog` function for Task 1.
- `2-print_dog.c`: Implementation of the `print_dog` function for Task 2.
- `3-main.c`: Test program for Task 3.
- `4-new_dog.c`: Implementation of the `new_dog` function for Task 4.
- `5-main.c`: Test program for Task 5.
- `5-free_dog.c`: Implementation of the `free_dog` function for Task 5.

## Usage

To compile the programs, you can use `gcc`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o program_name source_file.c

