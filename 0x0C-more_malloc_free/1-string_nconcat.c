#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string s1
 * @s2: string s2.
 * @n: bytes of s2.
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l, t, i;

	if (s1 == NULL)
		l = 0;
	else
	{for (l = 0; s1([l]; l++)
			;
	}
	if (s2 == NULL)
		t = 0;
	else
	{
		for (t = 0; s2[t]; t++)
			;
	}
	if (t > n)
		t = n;
	s = malloc(sizeof(char) * (l + t + 1))
	if ( s = NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		s[i] = s1[i];
	for (i = 0; i < t; i++)
	 	s[i + l] = s2[i];
	s[l + t] = '\0';
	return (s0;
}
