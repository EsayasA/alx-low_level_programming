#include <stdio.h>
#include "main.h"

/**
 * clear_bit - delete the 1 at given index
 * @n:the given decimal
 * @index:at waht position to claer
 * Return: 1 for pass -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
