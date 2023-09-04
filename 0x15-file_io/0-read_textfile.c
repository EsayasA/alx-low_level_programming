#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  function that reads a text file and print
 * @filename:file name
 * @letters:number of letters it should read and print
 * Return:returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fil;
	ssize_t re;
	ssize_t wr;

	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	re = read(fil, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);
	free(buffer);
	close(fil);
	return (wr);
}
