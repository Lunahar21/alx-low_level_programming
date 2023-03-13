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
		return (Null);
	arry = (char *) malloc(size * sizeof(char));
	if (array == 0)
		return (Null);
	for (i = 0; i < size; i++)
	{
		arry[i] = c;
	}
	return (array);
}
