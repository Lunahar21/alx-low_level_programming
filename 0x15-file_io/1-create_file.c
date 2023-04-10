#include "main.h"
/**
 *create_file - a  function that creates a file
 *@filename: name a given of file
 *@text_content: file content
 *
 *Return: 1 on sucees else -1
 */
int create_file(const char *filename, char *text_content)
	{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, len) != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
