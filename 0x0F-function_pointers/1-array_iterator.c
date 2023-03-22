#include "function_pointers.h"
/**
 *array_iterator - function  excutes a function
 *@array: array of integers
 *@size: size of array
 *@action: fuction pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	size_t i;

	if (array && action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
