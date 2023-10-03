#include "main.h"

/**
 * append_text_to_file - function body
 * @filename: the file to append text to
 * @text_content: text to be appended
 * Return: Always int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, written, fp;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fp = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fp == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;
	written = write(fp, text_content, i);
	if (written == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
