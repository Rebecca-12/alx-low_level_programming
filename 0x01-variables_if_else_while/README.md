# Project Title

0x01. C - Variables, if, else, while

## Table of Contents

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Usage](#usage)
- [Author](#author)
- [License](#license)

## Description

This project focuses on learning and practicing fundamental concepts of C programming, including variables, conditional statements (if-else), loops (while), arithmetic operators, logical operators, and more. It consists of several tasks designed to reinforce your understanding of these concepts.

## Learning Objectives

By completing this project, you are expected to achieve the following learning objectives:

- Understand and use arithmetic operators, logical operators, and relational operators.
- Identify values considered TRUE and FALSE in C.
- Learn how to use conditional statements (if, if-else) to control program flow.
- Practice declaring variables of different types (char, int, unsigned int) and assigning values to them.
- Print variable values using the `printf` function.
- Familiarize yourself with the while loop and its usage.
- Explore the ASCII character set and its importance.
- Gain knowledge about gcc compiler flags like `-m32` and `-m64`.

## Requirements

### General

- Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 20.04 LTS using gcc with the following options:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- You are not allowed to use the `system` function.
- Your code should follow the Betty style guide and will be checked using `betty-style.pl` and `betty-doc.pl`.

## Tasks

1. **Positive anything is better than negative nothing**
   - This program assigns a random number to the variable `n` each time it's executed and prints whether `n` is positive, negative, or zero.

2. **The last digit**
   - This program assigns a random number to the variable `n` and prints the last digit of `n`.

3. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
   - Write a program that prints the lowercase alphabet in reverse.

4. **alphABET**
   - Write a program that prints the alphabet in lowercase and then in uppercase.

5. **When I was having that alphabet soup, I never thought that it would pay off**
   - Write a program that prints the lowercase alphabet, excluding the letters 'q' and 'e'.

6. **Numbers**
   - Write a program that prints all single-digit numbers of base 10.

7. **Numberz**
   - Write a program that prints all single-digit numbers of base 10 without using char variables.

8. **Smile in the mirror**
   - Write a program that prints the lowercase alphabet in reverse.

9. **Hexadecimal**
   - Write a program that prints all the numbers of base 16 (hexadecimal) in lowercase.

10. **Patience, persistence and perspiration make an unbeatable combination for success**
    - Write a program that prints all possible combinations of single-digit numbers.

## Usage

1. Clone this repository to your local machine.
2. Navigate to the directory of the specific task you want to run.
3. Compile the C file using gcc with the provided compiler flags.
4. Run the compiled executable to see the output.

Example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
./0-positive_or_negative

