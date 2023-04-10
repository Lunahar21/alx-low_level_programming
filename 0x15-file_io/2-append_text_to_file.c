#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: a poiter to the file
 * @text_content: a pointer the str to be appeded
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_checker, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_checker = write(fd, text_content, len);

	if (write_checker == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
