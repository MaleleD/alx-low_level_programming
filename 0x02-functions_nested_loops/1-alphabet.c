#include "main.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line
 *
 * Description: using the mainfunction
 * this program print(alphabet, in lowercase, followed by a new line)
 * Return: 0
 */
void print_alphabet(void)
{
	char (c);
	for (c = 'a'; c <= 'z'; c ++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
