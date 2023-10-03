#include "main.h"

/**
 * creat_file - creating a file
 * @filename: the name of the file to be created
 * @text_content: content to be written
 * Return: Always int
 */

int create_file(const char *filename, char *text_content)
{
	int fp, written;
	int k = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	for (; text_content[k] != '\0'; k++)
	if (k == 0)
	written = write(0, text_content, k);
	if (written == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);

}
