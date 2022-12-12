#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - main block of code
 *
 *Documentation - code to return positive, negative or zero.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	/* variable declarations*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My lines of code.*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
