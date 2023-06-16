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
	char low_ch;

	for (low_ch = 'z'; low_ch >= 'a'; low_ch--)
		putchar(low_ch);
		putchar('\n');

	return (0);
}

