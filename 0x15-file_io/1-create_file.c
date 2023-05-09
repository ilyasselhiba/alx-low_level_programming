#include "main.h"
/**
 * create_file - Creates
 * @filename: A pointer to the file to create.
 * @text_content: a string to write to the file.
 * Return: If function fails - -1.
 * Otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int cs, ws, les = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (les = 0; text_content[les];)
			les++;
	}

	cs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ws = write(cs, text_content, les);

	if (cs == -1 || ws == -1)
		return (-1);

	close(cs);

	return (1);
}
