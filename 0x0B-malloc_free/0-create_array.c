#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 *@size: input integer
 *@c: inpute character
 *
 * Return: integer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
