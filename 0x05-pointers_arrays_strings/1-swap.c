#include "main.h"
#include <stdio.h>

/**
 * swap_int - waps the values of two integers
 * @a:number 1
 * @b:number 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
