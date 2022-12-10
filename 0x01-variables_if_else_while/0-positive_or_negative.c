#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 *  main - program to return a ramdom number
 *
 *
 * Return: Always 0 (success)
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
