#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int d;
	char c;

	for (d = 0; d < 10; d++)
		putchar((d % 10) + '0');

	for (c = 'a'; c <= 'f'; C++)
		putchar(c);

	putchar('\n');

	Return (0);
}
