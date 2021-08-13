#include <stdio.h>
#include "main.h"

/**
 * main - copies a file to another
 * @argc: no of arguments
 * @argv: argument vector
 *
 * Return: 0 on success,98,99,100 otherwise
 */
int main(int argc, char **argv)
{
	int fd_r, fd_w, rd, c_r, c_w;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_RDONLY | O_TRUNC, 0664);
	while ((rd = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w == -1 || write(fd_w, buf, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c_r = close(fd_r);
	c_w = close(fd_w);
	if (c_r < 0 || c_w < 0)
	{
		if (c_r < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (c_w < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}


