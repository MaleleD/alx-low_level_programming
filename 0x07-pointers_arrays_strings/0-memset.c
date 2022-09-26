#include <stdio.h>
#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: pointer having the address of the memory to fill
 * @b: constant to be written into memory
 * @n: number of times the byte will be written to memory
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
