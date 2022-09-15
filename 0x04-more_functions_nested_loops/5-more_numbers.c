#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int m1, m2;

	for (m1 = 0; m1 < 10; m1++)
	{
		for (m2 = 0; m2 < 14; m2++)
		{
			if (m2 > 9)
			{
				_putchar((m2 / 10) + '0');
			}
			_putchar((m2 % 10) + '0');
		}
		_putchar(10);
	}
}
