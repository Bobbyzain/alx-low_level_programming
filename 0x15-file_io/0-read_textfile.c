#include "main.h"

/**
 * read_textfile - reading a text file
 * @filename: the file name
 * @letters: the no. of letters to print
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, written;
	int k = letters;
	ssize_t j = 0;
	char *str;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	str = malloc(sizeof(char) * k);
	if (str == NULL)
	{
		close(fp);
		return (0);
	}
	j = read(fp, str, k);
	if (j == -1)
	{
		free(str);
		close(fp);
		return (0);
	}
	written = write(STDOUT_FILENO, str, j);
	if (written == -1 || written != j)
	{
		close(fp);
		free(str);
		return (0);
	}
	free(str);
	close(fp);
	return (written);
}
