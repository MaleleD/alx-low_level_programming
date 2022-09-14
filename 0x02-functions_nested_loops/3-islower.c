#include "main.h"

/**
 * _islower - function to check for the lowercase character
 * @c: the int that will be used for function argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
