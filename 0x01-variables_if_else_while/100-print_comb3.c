#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch, ch1;

for (ch = '0'; ch <= '9'; ch++)
{
for (ch1 = ch + 1; ch <= '9'; ch++)
{
putchar(ch);
putchar(ch1);
putchar(',');
putchar(' ');
}}
putchar('\n');

return (0);
}

