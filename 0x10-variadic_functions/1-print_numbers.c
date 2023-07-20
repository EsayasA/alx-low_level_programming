#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator:separator
 * @n:number
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (separator != NULL)
	{
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d", va_arg(ptr, unsigned int));
			printf("%s", separator);
		}
		else
		printf("%d", va_arg(ptr, unsigned int));
	}
	va_end(ptr);
	}
	printf("\n");
}
