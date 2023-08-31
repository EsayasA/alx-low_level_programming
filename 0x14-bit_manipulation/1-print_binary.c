#include <stdio.h>
#include "main.h"

/**
 * print_binary - change to binary
 * @n:the integer number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	int j;
	unsigned long int value;

	for (j = 63; j >= 0; j--)
	{
		value = n >> j;
		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
