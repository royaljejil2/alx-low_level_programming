#include "main.h"

/**
 * read_textfile - function that reads text file and prints to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nwr, nrd;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	free(buff);
	close(fd);
	return (nwr);
}

