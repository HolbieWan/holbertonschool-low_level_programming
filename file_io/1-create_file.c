#include "main.h"

/**
 * create_file - function that creates a file.
 * and prints it to the POSIX standard output.
 * @filename:name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nbletters = 0;
	int nbwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[nbletters] != '\0')
		nbletters++;

	nbwritten = write(fd, text_content, nbletters);

	if (nbwritten == -1)
		return (-1);

	close(fd);

	return (1);
}
