#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary number to unsigned int
 * @b: string with binary number
 *
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int j;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal = 2 * decimal + (b[j] - '0');
	}

	return (decimal);
}

