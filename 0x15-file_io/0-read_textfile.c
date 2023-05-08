#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: the file name to read
 * @letters: the number of letters to read
 * Return: 0 or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f, Nub, t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	Nub = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (Nub);
}
