#include <stdio.h>
#include "main"

/**
 *print_diagonal -  a function that draws a diagonal line on the terminal
 *@n: parameter
 *return: 0
 */

void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1, sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
