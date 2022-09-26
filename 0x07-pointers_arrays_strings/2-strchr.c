#include "main.h"
#include <stdio.h>

/**
 *_strchr - a function that locates a character in a string.
 *@s: pointer containing the string address.
 *@c: characte to be located within the string
 *Return: address of the first occurrence of c in the string
 */
char *_strchr(char *s, char c)
{
	char *i = s;
	
	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
