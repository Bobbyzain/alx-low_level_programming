#include "main.h"

/**
 * main - Entry point of the function
 * @argc: the count of arguments
 * @argv: the list of command line arguments
 * Return: Always int
 */

int main(int argc, char *argv[])
{
	int fpf, bytes_read, written, close_res;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fpf = open(argv[1], O_RDONLY);
	if (fpf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fpf);
		exit(100);
	}
	bytes_read = read(fpf, buffer, 1024);
	if (bytes_read == -1)
	{
		close(fpf);
		free(buffer);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_res = close(fpf);
	if (close_res != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fpf);
		exit(100);
	}
	written = write_copied(bytes_read, buffer, argv[2]);
	free(buffer);
	return (written);
}
/**
 * write_copied - write what was copied
 * @read_t: the tracker for the content read
 * @buf: the size of the content to be written
 * @f_name: the name of the file to copy content to
 * Return: Always int
 */
int write_copied(int read_t, char *buf, char *f_name)
{
	int written, fpt, close_res;

	if (buf == NULL)
		return (-1);

	fpt = open(f_name, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fpt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", f_name);
		exit(99);
	}
	written =  write(fpt, buf, read_t);
	if (written == -1)
	{
		close(fpt);
		dprintf(2, "Error: Can't write to %s\n", f_name);
		exit(99);
	}
	close_res = close(fpt);
	if (close_res != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fpt);
		exit(100);
	}
	return (written);
}
