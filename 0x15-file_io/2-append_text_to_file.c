#include "main.h"


/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: This represents the filename.
 * @text_content: This is newly added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int let_new;
	int new_wr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (let_new = 0; text_content[nletters]; let_new++)
			;

		new_wr = write(file, text_content, let_new);

		if (new_wr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
