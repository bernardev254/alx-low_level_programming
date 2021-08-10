#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on success,0, otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, s = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
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


