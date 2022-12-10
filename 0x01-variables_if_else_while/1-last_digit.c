#include <stdlib.h>
#include <time.h>

/* More headers goes here */

/* Betty stle main function goes here */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	/* My code goes in here */
	if  (n > 0)
		printf ("%i is positive. \n", n);
	elseif (n < 0)
		prinf ("%i is negative. \n", n);
	else
		printf ("%i is equal to zero. \n", n);
	return (0);
}
