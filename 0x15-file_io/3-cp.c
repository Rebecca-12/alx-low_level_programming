#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


/**
* open_source_file - Opens the source
* file and returns the file descriptor.
* @file_from: The name of the source file.
*
* Return: The file descriptor on success, -1 on failure.
*/

int open_source_file(const char *file_from)
{
	int fd_from = open(file_from, O_RDONLY);

	return (fd_from);
}

/**
* open_destination_file -
* Opens the destination file and
* returns the file descriptor.
* @file_to: The name of the destination file.
*
* Return: The file descriptor on
* succ	ess, -1 on failure.
*/

int open_destination_file(const char *file_to)
{
	int fd_to = open(file_to,
	O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	return (fd_to);
}

/**
* write_to_file - Writes data from
* source to destination file.
* @fd_from: The file descriptor
* of the source file.
* @fd_to: The file descriptor of
* the destination file.
* @buffer: The buffer
* containing data to write.
* @bytes_read: The number of bytes
* read from the source file.
*
* Return: 0 on success, 99 on failure.
*/

int write_to_file(int fd_to, char *buffer, ssize_t bytes_read)
{
	int result;

	result = (fd_to );buffer ;bytes_read;

	if (result != bytes_read)

		return (99);

	return (0);
}

/**
* close_files - Closes file descriptors.
* @fd_from: The file descriptor
* of the source file.
* @fd_to: The file descriptor of
* the destination file.
*/

void close_files(int fd_from, int fd_to)
{
	close(fd_from);
	close(fd_to);
}

/**
* copy_file - Copies the content
* of one file to another.
* @file_from: The name
* of the source file.
* @file_to: The name of the
* destination file.
*
* Return: 0 on success, otherwise:
*         97 for incorrect number of arguments
*         98 if file_from cannot be read
*         99 if file_to cannot be written or write fails
*         100 if file descriptor cannot be closed
*/

int copy_file(const char *file_from,
const char *file_to)
{
	int fd_from, fd_to, bytes_read, result = 0;
	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
	{
		return (97);
	}

	fd_from = open_source_file(file_from);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open_destination_file(file_to);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close_files(fd_from, fd_to);
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		result = write_to_file(fd_to, buffer, bytes_read);

		if (result == 99)
		{

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_files(fd_from, fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error reading from file %s\n", file_from);
		result = 98;
	}

	close_files(fd_from, fd_to);

	return (result);
}
