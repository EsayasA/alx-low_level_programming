#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator:like comma
 * @n:numbers of string
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *str;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
