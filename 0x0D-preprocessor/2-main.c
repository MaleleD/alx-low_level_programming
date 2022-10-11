#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * Return: 1 if an error occurred, 0 otherwise
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
