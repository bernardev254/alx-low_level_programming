#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - read a file and prints it to stdout
 * @filename: pointer to string to be written
 * @letters: actual number of char written
 *
 * Return: number of char read
 * or 0,on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	r =  read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';

	close(fd);

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (w);
}

