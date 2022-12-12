#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block code
 *
 * Description - print alphabet in lowercase on a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
