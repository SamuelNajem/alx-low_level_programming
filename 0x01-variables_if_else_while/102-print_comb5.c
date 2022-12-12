#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: program for two two digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int w = 0;
	int x;
	int z;
	int i;
	int j;
	int k;

	while (w < 98)
	{
		x = (w / 10 + '0');
		z = (w % 10 + '0');
		i = 0;
		while (i < 99)
		{
			j = (i / 10 + '0');
			k = (i % 10 + '0');
			if (w < i)
			{
				putchar(x);
				putchar(z);
				putchar(' ');
				putchar(j);
				putchar(k);
				if (w != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
