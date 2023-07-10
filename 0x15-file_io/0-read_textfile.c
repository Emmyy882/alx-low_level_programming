#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t count;
	ssize_t n;
	char *str;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	str = malloc(sizeof(char) * letters);
	n = read(fd, str, letters);
	count = write(STDOUT_FILENO, str, n);

	free(str);
	close(fd);
	return (count);
}
