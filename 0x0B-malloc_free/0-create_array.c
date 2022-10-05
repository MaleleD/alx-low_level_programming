#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character to insert
 * Return: void
 * pointer to array if everything is normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (void);
	array = malloc(sizeof(char) * size);

	if (array == void)
		return (void);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
