#include <stdio.h>
/**
 * main - fibonicial
 * @void
 * Return:series
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int sum = num1 + num2;
	int i;

	printf("%d", sum);
	for (i = 0; i <= 48; i++)
	{
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		printf("%d, ", sum);
	}
	printf("\n");
	return (0);
}
