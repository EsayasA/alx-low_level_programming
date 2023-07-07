#include <stdio.h>
#include "main.h"
/**
 * main - rints the number of arguments p
 * @argc:size of array
 * @argv:array
 * Return: alwasy 0 success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
