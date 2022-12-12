#include <stdio.h>
#include <stdlib.h>

/**
 * Main - program to print alphabet in lowercase.
 *
 * Description - print alphabet in lowercase on a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
