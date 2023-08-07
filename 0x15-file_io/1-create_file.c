#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - unction that creates a file.
 * @filename:filename
 * @text_content:content
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write (file, text_content, i);
	if (wr == -1 || file == -1)
		return (-1);
	close (file);
	return (1);
}
