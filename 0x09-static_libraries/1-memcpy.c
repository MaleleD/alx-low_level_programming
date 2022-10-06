#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer that receives the copied data.
 * src: pointer with information to be copied.
 * @n: the  amount of times the src information will be copied to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
