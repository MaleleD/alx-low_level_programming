#include "main.h"

/**
*_isupper -  a function that checks for uppercase character.
*@c: c - variable
*Return: 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
