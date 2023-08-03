#include "main.h"

/**
 * flip_bits - count bits to cahnge
 * @n:number at first
 * @m: second number
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int value;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		value = exclusive >> j;
		if (value & 1)
			count++;
	}

	return (count);
}

