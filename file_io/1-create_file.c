#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1
 **/
int create_file(const char *filename, char *text_content)
{
	int file, text = 0, w;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file < 0)
	{
		return (-1);
		write(STDERR_FILENO, "fail\n", 5);
	}
	if (text_content == NULL)
		text_content = "";
	while (text_content[text] != '\0')
		text++;
	w = write(file, text_content, text);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}
