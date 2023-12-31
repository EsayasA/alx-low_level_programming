#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a
 * @filename:file name
 * @text_content:content
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, i);
	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}

