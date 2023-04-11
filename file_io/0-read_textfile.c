#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text
 * @letters: is the number of letters it should read and print
 * Return: w
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fc, r, w;
	char *p;

	if (filename == NULL)
		return (0);
	fc = open(filename, O_RDONLY);
	if (fc == -1)
		return (0);
	p = malloc(sizeof(char) * (letters));
	if (p == NULL)
		return (0);
	r = read(fc, p, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, p, r);
	close(fc);
	return (w);
}
