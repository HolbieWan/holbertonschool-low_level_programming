#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * and prints it to the POSIX standard output.
 * @filename:name of the file to be appended
 * @text_content: a NULL terminated string to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nbletters = 0;
	int nbwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[nbletters] != '\0')
		nbletters++;

	if (text_content == NULL)
	{
		;
	}

	if (text_content != NULL)
		nbwritten = write(fd, text_content, nbletters);

	if (nbwritten == -1)
		return (-1);

	close(fd);

	return (1);
}
