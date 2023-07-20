#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - eturns the sum of all its parameters
 * @n:total numbers
 * Return:void
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
	va_end(ptr);
	return (sum);
}
