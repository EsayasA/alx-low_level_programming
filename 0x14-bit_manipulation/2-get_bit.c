#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the value at the index
 * @n:integer
 * @index:shows the specic index
 * Return: decimal
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int decimal = 0;

	if (index > 63)
		return (-1);
	decimal = (n >> index) & 1;
	return (decimal);
}
