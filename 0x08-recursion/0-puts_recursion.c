#include "main.h"

/**
 * _puts_recursion - a function that prints a string in reverse
 * @s: string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	puts_recursion(s + 1);
}
