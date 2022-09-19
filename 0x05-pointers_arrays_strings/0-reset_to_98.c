#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - resets the value of given integer to 98
 * @n: is the pointer
 * Return: 0
 */

void reset_to_98(int *n)
{
	int n;

	n = 402;
        printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
