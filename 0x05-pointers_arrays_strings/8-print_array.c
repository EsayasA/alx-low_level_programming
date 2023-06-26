#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a:array 
 * @n:nuber to be printed
 * Return:void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i != n)
		{
			printf("%d, ",a[i - 1]);
		}
		else
		{
			printf("%d",a[i - 1]);
		}
	}
	printf("\n");
}
