#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the number
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, tem;

	for (i = 0; i < n--; i++)
	{
		tem = a[i];
		a[i] = a[n];
		a[n] = tem;
	}
}
