
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


 /**
* main - Entry point of the program.
* @argc: The argument count.
* @argv: The argument vector
*
* copy_file - Copies the content of one file to another.
* @file_from: The name of the source file.
* @file_to: The name of the destination file.
* Return: 0 on success, otherwise:
*         97 for incorrect number of arguments
*         98 if file_from cannot be read
*         99 if file_to cannot be written or write fails
*         100 if file descriptor cannot be closed
*
*         Return: 0 on success, non-zero on failure.
*/


int copy_file(const char *file_from, const char *file_to)
{

	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (100);
	}

	return (0);
}

int main(int argc, char *argv[])
{
	int status; /* Move the declaration of the 'status' variable to the beginning*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	status = copy_file(argv[1], argv[2]); /* Assign the value to the 'status' variable*/

	return (status);
}
