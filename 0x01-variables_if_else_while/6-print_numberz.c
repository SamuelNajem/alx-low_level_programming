#include <stdio.h>
#include <stdlib.h>

/**
 * main -  main block execution
 *
 * Description: program to display numbers starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
