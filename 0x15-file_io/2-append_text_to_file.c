#include "main.h"

/**
 * append_text_to_file - It appends at the end of a file a text .
 * @filename: The name of the file is pointed .
 * @text_content: Adding the string to the end of the file .
 *
 * Return: The function fails or filename is NULL - -1 .
 *         The file does not exist the user lacks print permissions - -1 .
 *         Else - 1 .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
