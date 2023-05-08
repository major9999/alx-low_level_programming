#include "main.h"

/**
 * create_file - poqwdjiouqwoigfjqofgqiowfj.
 * @text_content: erpoiwhjgieofowqdkoqpwgnwerhg
 * @filename: qpowdfoiqwfoijwqiofgj9ro0pejhg.
 * Return: oijqwdijqiowdjiqowdjoiqw a one.
 */

int create_file(const char *filename, char *text_content)
{
	int orda;
	int w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}


	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	orda = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(orda, text_content, len);

	if (orda == -1 || w == -1)
	{
		return (-1);
	}

	close(orda);

	return (1);
}
