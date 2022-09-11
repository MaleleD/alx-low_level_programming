#include <stdio.h>

/**
* main - Prints the alphabet in lowercase
*
* Description: using the main function
* this program prints "alphabet in lowercase, followed by a new line
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
