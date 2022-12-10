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
	
	printf("Size of char: %lu bytes.\n", a);
	printf("Size of int: %lu bytes.\n", b);
	printf("Size of long int: %lu bytes.\n", c);
	printf("Size of long long int: %lu bytes.\n", d);
	printf("Size of floa is %lu bytes.\n", e);
	return (0);
}
