#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print whether the number stored in the variable n is positive or negative.
*
* Description: using the main function
* this program prints "positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 /* your code goes there */
	if (n > 0)
	{
		printf("%i positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
return (0);
}
