#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @n:the value
 * Return:last digit of the number
 */
int print_last_digit(int n)
{
	int rem;
	rem=n % 10;
	_putchar(rem + '0');
	return (rem);
}
