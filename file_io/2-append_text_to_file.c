#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, text = 0, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	while (text_content[text] != '\0')
		text++;
	w = write(file, text_content, text);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}
