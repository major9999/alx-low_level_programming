#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - powqegopkdopwqkdpoqwjgoiweghjiowjf.
 * @filename: opiqwdjioqnwojneqotgqwrf.
 * @letters: oiqwdjioqwjgfqiojgfowq.
 * Return: trehpojeifuqwiuodwiojqwodj.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opra, rodra;
	ssize_t w;

	char *buffer;

	if (filename == NULL)

	{
		return (0);
	}


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)

	{
		return (0);
	}


	opra = open(filename, O_RDONLY);
	rodra = read(opra, buffer, letters);
	w = write(STDOUT_FILENO, buffer, rodra);

	if (opra == -1 || rodra == -1 || w == -1 || w != rodra)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opra);

	return (w);
}
