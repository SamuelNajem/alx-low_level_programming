#include <stdio.h>
#include <stdlib.h>

/**
 *main - main execution portal starts here
 *
 * description - program to diplay all possible commbinations digit
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
