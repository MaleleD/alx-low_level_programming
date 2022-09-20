#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s - the input string
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')

	{						
		len = len + 1;
		s = s + 1;
	}
	return (len);
}
