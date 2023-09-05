#include "main.h"

/**
 * create_file - to create a file
 * @filename: the name of the file
 * @text_content: what to write to the file
 * Return: Always int
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i = 0, written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
