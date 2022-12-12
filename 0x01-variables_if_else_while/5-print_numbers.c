#include <stdio.h>
#include <stdlib.h>

/**
 *main - main block excution point.
 *
 * Documentation - program display base 10 numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
