#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of the two diagonals of a square matrix of inte
 * @a:integer
 * @size:size
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum1 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum1 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
