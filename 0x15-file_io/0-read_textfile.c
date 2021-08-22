#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the text file
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, actual_read;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (!buf)
		return (0);

	actual_read = read(fd, buf, letters);
	buf[letters + 1] = '\0';

	close(fd);

	actual_read = write(STDOUT_FILENO, buf, actual_read);

	free(buf);

	if (actual_read == -1)
		return (0);

	return (actual_read);
}
