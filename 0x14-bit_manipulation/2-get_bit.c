#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the value of tbe bit at index
 * @n:the decimal number
 * @index:show the specific index
 * Return: the decimal value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int decimal = 0;

	if (index > 63)
		return (-1);
	decimal = (n >> index) & 1;
	return (decimal);
}
