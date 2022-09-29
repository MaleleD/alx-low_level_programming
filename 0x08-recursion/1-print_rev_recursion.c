#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: string
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		if (*s != '\0')
		_putchar(*s);
	}
}
