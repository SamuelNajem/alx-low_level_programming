#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block execution start here
 *
 * Description: program to print lower case alpabeth in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
