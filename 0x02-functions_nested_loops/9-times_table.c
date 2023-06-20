#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * @void:tble
 * Return:time table
 */
void times_table(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;
			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}}
