#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * @void:number
 * Return:numbers
 */
void print_most_numbers(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
if (!(ch == '2' || ch == '4'))
{
_putchar(ch);
}
}
_putchar('\n');
}
