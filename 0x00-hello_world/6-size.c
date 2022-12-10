#include <stdio.h>

/**
 * main - program to display size of c data types
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of char: %lu bytes.\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu bytes.\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu bytes.\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu bytes.\n", (unsigned long)sizeof(d));
	printf("Size of floa is %lu bytes.\n", (unsigned long)sizeof(e));
	return (0);
}
