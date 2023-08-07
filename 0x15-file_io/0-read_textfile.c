#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters to read and print
 *
 * Return: the actual number of read bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t count;
	ssize_t n;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	n = read(fd, buffer, letters);
	count = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fd);
	return (count);
}
