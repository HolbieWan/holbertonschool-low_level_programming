#include "main.h"

/**
 * read_textfile - function  that reads a text file
 * and prints it to the POSIX standard output.
 * @filename:the file we want to read the text from
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbread, nbwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nbread = read(fd, buffer, letters);
	nbwritten = write(STDOUT_FILENO, buffer, nbread);

	close(fd);
	free(buffer);

	return (nbwritten);
}
