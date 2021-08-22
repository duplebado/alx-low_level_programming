#include <unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * standard output
 * @letters: number of letters it should read and print
 * @filename: pointer to the filename of the file
 * Return: actual number of letters it could read and print
 * 0, if the file can not be opened or read; OR
 * 0, if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	void *buf;
	char *typecast_buf;
	ssize_t fd, result, actual_read;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (!buf)
		return (0);

	actual_read = read(fd, buf, letters);
	typecast_buf = (char *)buf;
	typecast_buf[letters + 1] = '\0';

	close(fd);

	result = write(fd, buf, actual_read);

	free(buf);

	return (result);
}
