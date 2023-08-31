#include <stdio.h>
#include "main.h"

/**
 * clear_bit - given the one number at index
 * @n:integer
 * @index:at what position to clear
 * Return: -1 if it fails and 1 if it pass
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
