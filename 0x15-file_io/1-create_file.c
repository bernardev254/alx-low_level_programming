#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on success,0, otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, s = 0;

	fd = open(filename, O_CREATE | O_RDONLY | O_TRUNCATE, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[s])
			s++;
		w = write(fd, text_content, s);
		if (w != s)
			return (-1);
	}
	close(fd);

	return (1);
}


