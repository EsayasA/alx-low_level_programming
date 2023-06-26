#include "main.h"
/**
 * puts_half - prints half of a string
 * @str:input string
 * Return:void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		i = i + 1;
	}
	for (j = i / 2; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
