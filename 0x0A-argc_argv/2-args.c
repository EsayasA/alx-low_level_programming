#include <stdio.h>
#include "main.h"
/**
 * main - that prints all arguments it receives.
 * @argc:size
 * @argv:array
 * Return: always 0 sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
