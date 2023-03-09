#include "main.h"
/**
 *is_palindrome - a function that return 1 if str plaindrome else 0
 *
 *@s: a pointer pointing to char
 *
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	char s;
	int i, length;

	length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if (s[i] == (s[length - i - 1])
			return (1);

	}
	else
		return (0);
}

