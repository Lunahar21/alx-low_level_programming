#include "main.h"
/**
 *read_textfile - a function that reads a text file and prints
 *	it to the POSIX standard output
 *@file: the file we want to open
 *@letters: bytes to be read
 *
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; char *buf;
	int lenRead, lenWrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);
	lenRead = read(fd, buf, letters);

	lenRead = write(STDOUT_FILENO, buf, lenRead);
	if (lenWrite != lenRead && lenWrite == -1)
		return (0);
	free(buf);
	close(fd);
	return(lenRead);
}
