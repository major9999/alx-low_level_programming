#include "main.h"

/**
 * append_text_to_file - qpowdjfioqwnoginqwegf.
 * @filename: qpiowdjioqwdjwqfjoihegj
 * @text_content: ewrjregefrtjhtrjktrfwedfweg
 * Return: lpioqdwjioqwfqwpofjpohwgwg.
 */

int append_text_to_file(const char *filename, char *text_content)
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
		{
			len++;
		}

	}

	orda = open(filename, O_WRONLY | O_APPEND);
	w = write(orda, text_content, len);

	if (orda == -1 || w == -1)
	{
		return (-1);
	}


	close(orda);

	return (1);
}
