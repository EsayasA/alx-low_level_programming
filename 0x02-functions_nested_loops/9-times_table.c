#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * @void:tble
 * Return:time table
 */
void times_table(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar('i' * 'j');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}}
