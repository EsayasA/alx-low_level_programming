#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n:input number
 * Return:sum of natural number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = 0; i <= 98; i++)
	{
		if (n / 10)
		{
			print_to_98(n / 10);
		}
		if (i != 98)
		{
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		}}
	_putchar('\n');
}
