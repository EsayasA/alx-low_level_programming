#include <stdio.h>
#include "main.h"

/**
 * main -  prints its name, followed by a new lin
 * @argc:size
 * @argv:array
 * Return: always success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
