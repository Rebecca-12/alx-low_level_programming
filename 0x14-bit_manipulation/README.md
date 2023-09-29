
C Bit Manipulation Project

This project includes C programs related to bit manipulation.

## Table of Contents

1. [Description](#description)
2. [Files](#files)
3. [Requirements](#requirements)
4. [Compilation](#compilation)
5. [Tasks](#tasks)
6. [Quiz Questions](#quiz-questions)
7. [Endianness](#endianness)
8. [Crackme3](#crackme3)
9. [License](#license)

## Description

This repository contains C programs focused on bit manipulation. The tasks cover various aspects of bitwise operations and bit-level manipulations.

## Files

- `0-binary_to_uint.c` - Converts a binary number to an unsigned int.
- `1-print_binary.c` - Prints the binary representation of a number.
- `2-get_bit.c` - Returns the value of a bit at a given index.
- `3-set_bit.c` - Sets the value of a bit to 1 at a given index.
- `4-clear_bit.c` - Sets the value of a bit to 0 at a given index.
- `5-flip_bits.c` - Returns the number of bits needed to flip to get from one number to another.
- `100-get_endianness.c` - Checks the endianness.
- `101-password` - File containing the password for Crackme3.

## Requirements

- Ubuntu 20.04 LTS
- gcc compiler with options: -Wall -Werror -Wextra -pedantic -std=gnu89

## Compilation

Compile the programs using gcc. Example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_converter

## Quiz questions

Quiz questions and related content are outlined in the project description.


## Endianness
The endianness program checks whether the system is big endian or little endian.


## Crackme3
Crackme3 is an advanced task where the goal is to find the password for the program.
