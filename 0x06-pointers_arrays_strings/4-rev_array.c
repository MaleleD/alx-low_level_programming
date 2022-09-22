#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of an array of integer
 * @a: array
 * @n: number of elements
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
