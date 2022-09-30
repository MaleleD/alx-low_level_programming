#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}
