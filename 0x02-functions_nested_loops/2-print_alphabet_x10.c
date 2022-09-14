#include "main"
/**
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 * 
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int m, co;

	co = 0

	while (co < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		co++;
		_putchar('\n');
	}
}
