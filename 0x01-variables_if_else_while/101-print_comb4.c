#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10 ; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i != j && j != k)
				{
				putchar('i');
				putchar('j');
				putchar('k');
				}
				if (i != 7)
				{
				putchar(',');
				putchar(' ');
				}
			}}}

	return (0);
}
