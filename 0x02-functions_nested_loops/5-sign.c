#include "main.h"

/**
 * print_sign - function to check for a number sign
 * @n: is the int that will be used for argument of the function
 * Return: 0
 **/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if(n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
