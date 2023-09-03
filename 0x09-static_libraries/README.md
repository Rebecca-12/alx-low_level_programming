# 0x09. C - Static libraries

This project involves working with C static libraries, creating them, and using them in C programs.

## Project Description

In this project, we are tasked with creating a static library called `libmy.a` that contains various C functions. These functions include:

- `_putchar`
- `_islower`
- `_isalpha`
- `_abs`
- `_isupper`
- `_isdigit`
- `_strlen`
- `_puts`
- `_strcpy`
- `_atoi`
- `_strcat`
- `_strncat`
- `_strncpy`
- `_strcmp`
- `_memset`
- `_memcpy`
- `_strchr`
- `_strspn`
- `_strpbrk`
- `_strstr`

Additionally, we need to create a script called `create_static_lib.sh` that will generate another static library called `liball.a` by compiling all the `.c` files found in the current directory.

## Requirements

- All code is written in C and must adhere to the Betty coding style.
- Compilation is done using `gcc` with specific flags (`-Wall -Werror -Wextra -pedantic -std=gnu89`).
- Each C source file should have no more than 5 functions.
- The standard library functions (e.g., `printf`, `puts`, etc.) are forbidden, but we can use `_putchar`.
- A `main.h` file containing function prototypes is included.
- No global variables are allowed.

## Project Files

- `*.c` files: Implementation of various C functions.
- `*.h` files: Header files containing function prototypes.
- `libmy.a`: The static library containing the implemented functions.
- `liball.a`: The static library created using the `create_static_lib.sh` script.
- `create_static_lib.sh`: The script to create the `liball.a` library.
- `main.c` (not pushed): Example C program to test the `libmy.a` library.

## Compilation and Usage

To compile the `libmy.a` library, use the following command:

```shell
gcc -std=gnu89 -Wall -Werror -Wextra -pedantic -c *.c
ar -rc libmy.a *.o

