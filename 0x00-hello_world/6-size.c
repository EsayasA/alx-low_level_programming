#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%zu byte(s)\n", (unsigned long)sizeOf(a));
	printf("Size of a int:%zu byte(s)\n", (unsigned long)sizeOf(b));
	printf("Size of a long int:%zu byte(s)\n", (unsigned long)sizeOf(c));
	printf("Size of a long long int:%zu byte(s)\n", (unsigned long)sizeOf(d));
	printf("Size of a float:%zu byte(s)\n", (unsigned long)sizeOf(e));
	return (0);
}
