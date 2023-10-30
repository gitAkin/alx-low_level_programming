#include "main.h"


/**
 * create_file - This function creates a file
 * @filename: This represents the filename.
 * @text_content: This is the content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int let_new;
	int new_wr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let_new = 0; text_content[let_new]; let_new++)
		;

	new_wr = write(file, text_content, let_new);

	if (new_wr == -1)
		return (-1);

	close(file);

	return (1);
}
