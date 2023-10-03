#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* append_text_to_file - Appends text
*at the end of a file.
* @filename: The name of the file.
* @text_content: The NULL-terminated
*
* string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, append_flag;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;  /* rw-r--r-- */

	if (filename == NULL)
		return (-1);

	append_flag = (access(filename, F_OK) != -1) ?
		O_WRONLY | O_APPEND : O_WRONLY | O_CREAT;

	fd = open(filename, append_flag, permissions);
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
