#include <stdio.h>
#include "main.h"

/**
 * set_bit - it puts the index
 * @n:the adress to put in
 * @index:at what place to enter
 * Return: 1 if pass or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
