#include "main.h"
#include <stdio.h>

/**
* more_numbers - a function that prints 10 times the numbers from 0 to 14 followed by a new line.
* _putchar only 3 times
* Return: 0-14 x10 followed by new line
*/
void more_numbers(void)
{
	int m, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
