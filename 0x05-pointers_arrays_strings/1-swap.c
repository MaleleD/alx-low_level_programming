#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first entry
 * @b: second entry
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
