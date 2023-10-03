#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  // For size_t
#include <unistd.h>  // For ssize_t

/* Function prototypes */

/* Task 0 */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1 */
int create_file(const char *filename, char *text_content);

/* Task 2 */
int append_text_to_file(const char *filename, char *text_content);

/* Task 3 */
int cp(const char *file_from, const char *file_to);

/* Task 4 - Advanced */
void elf_header(const char *elf_filename);

/* Helper function for printing characters */
int _putchar(char c);

#endif /* MAIN_H */
