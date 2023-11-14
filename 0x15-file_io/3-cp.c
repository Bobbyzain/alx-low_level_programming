#include "main.h"

/**
 * main - Entry point of the function
 * @argc: the count of arguments
 * @argv: the list of command line arguments
 * Return: Always int
 */

int main(int argc, char *argv[])
{
	int fpt, fpf, bytes_read, written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fpf = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close_fd(fpf);
		exit(100);
	}
	bytes_read = read(fpf, buffer, 1024);
	fpt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		written = write_copied(bytes_read, buffer, fpt, argv[2]);
		if (fpf == -1 || bytes_read == -1)
		{
			close_fd(fpf);
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_read =  read(fpf, buffer, 1024);
		fpt = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	close_fd(fpf);
	close_fd(fpt);
	free(buffer);
	return (written);
}
/**
 * close_fd - to confirm closure of files
 * @fd: the file descriptor
 * Return: Nothing
 */
void close_fd(int fd)
{
	int c_tracker = close(fd);

	if (c_tracker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * write_copied - write what was copied
 * @read_t: the tracker for the content read
 * @buf: the size of the content to be written
 * @f_des: the file descriptor
 * @f_name: the name of the file
 * Return: Always int
 */
int write_copied(int read_t, char *buf, int f_des, char *f_name)
{
	int written, fpt = f_des;

	if (buf == NULL)
		return (-1);

	written =  write(fpt, buf, read_t);
	if (fpt == -1 || written == -1)
	{
		close(fpt);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_name);
		free(buf);
		exit(99);
	}
	close_fd(fpt);
	return (written);
}