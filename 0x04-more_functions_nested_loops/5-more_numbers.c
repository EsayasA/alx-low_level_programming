#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @void:numbers
 * Return:print numbers
 */
void more_numbers(void)
{
	int i;
	char ch;
	char ch1 = '1';

	for(i = 0; i <= 9; i++)
	{
		for (ch = '0'; ch <= '9'; ch++)
		{
			if (ch == '9' && ch1 <= '4')
			{
				_putchar(ch1);
				ch1++;
			}
			_putchar(ch);
		}
		_putchar('\n');
	}
}
