# 0x0F. C - Function Pointers

This is a C programming project that focuses on function pointers. It contains several tasks that help you understand and practice using function pointers in C.

## Project Tasks

### Task 0: What's my name

Write a function that prints a name.

**Prototype:** `void print_name(char *name, void (*f)(char *));`

### Task 1: If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

**Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`

### Task 2: To hell with circumstances; I create opportunities

Write a function that searches for an integer in an array.

**Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`

### Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple arithmetic operations (+, -, *, /, %).

**Usage:** `calc num1 operator num2`

### Advanced Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

Write a program that prints the opcodes of its own main function.

**Usage:** `./main number_of_bytes`

## Project Requirements

- Allowed editors: vi, vim, emacs
- Code compiled on Ubuntu 20.04 LTS using gcc with specific options.
- Follow the Betty style for code formatting.
- No global variables allowed.
- Limited use of C standard library functions.
- Header file `function_pointers.h` with all function prototypes.
- Header files should be include guarded.
- Detailed requirements for each task are provided in their respective descriptions.

## Usage

Each task has its own set of source files. You can compile and run them as follows:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o task0
./task0
