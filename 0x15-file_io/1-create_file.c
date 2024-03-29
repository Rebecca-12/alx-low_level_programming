#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>  /* Include this for perror */
#include <string.h>

/**
* create_file - Creates a file with specified permissions and writes content.
* @filename: The name of the file to create.
* @text_content: A NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t permissions = S_IRUSR | S_IWUSR;  /* rw------- */

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			perror("Error writing to file");
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
