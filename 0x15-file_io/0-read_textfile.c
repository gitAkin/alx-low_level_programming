#include "main.h"


/**
 * read_textfile - This function reads a text file and prints the letters
 * @filename: This is the name of the file.
 * @letters: This is the numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rdo, wro;
	char *rdwr;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	rdwr = malloc(sizeof(char) * (letters));
	if (!rdwr)
		return (0);

	rdo = read(file, rdwr, letters);
	wro = write(STDOUT_FILENO, rdwr, rdo);
	if (rdo != wro)
		return (0);

	close(file);

	free(rdwr);

	return (wro);
}
