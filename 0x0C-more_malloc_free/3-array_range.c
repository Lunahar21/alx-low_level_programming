#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **array_range - a function that creates an array of integers
 *@min: minimum character that allocate in memory
 *@max: maximum character that allocate in memory
 *
 *Return: a pointer to the newly created array memory
 *  if min > max, return NULL
 *  if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, j;
	int *range;

	if (min > max)
		return (NULL);

	j = min;
	range = (int *) malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	for (i = 0; a <= (max - min); a++)
	{
		range[a] = j;
		j++;
	}
	return (range);
}
