#include "main.h"

/**
 * read_textfile - read a text file and prints
 * it to stardard output
 * @filename: pointer to name of file to be read
 * @letters: number of bytes the func can read
 * and print.0 on failure
 *
 * Return: number of char printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	r =  read(fd, buf, letters);
	if (r < 0)
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

