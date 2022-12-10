#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Main in main block.
 * Description: Get a random number and print the number
 * and if it is positive, negative or zero
 * return 0
 */

int main(void)
{
	int n;
	/* variable declarations
	 */
	srand(time(0));
	n = rand()- RAND_MAX/2;
	/* My lines of code.*/

	if (n>0)
		printf("%i is positive\n", n);
	else if (n<0)
		printf("%i is negative\n",n);
	else
		printf("%i is zero\n",n);
	return (0);
}
