#include <stdio.h>
/**
 * main - fibonicial
 * @void
 * Return:series
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum = 0;
	int i;

	printf("%d", num1);
	printf("%d", num2);
	for (i = 0; i < 48; i++)
	{
		num1 = num2;
		sum = num1 + num2;
		num2 = sum;
		printf("%d, ", sum);
	}
	printf("\n");
	return (0);
}
