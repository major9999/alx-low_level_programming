#include "main.h"

/**
 * main - display _putchar in console
 * Return: return 0 and exit the program
 */
int main(void)
{
	char myword[] = "_putchar";
	int i;

	for (i = 0; myword[i] != '\0'; i++)

	{
		_putchar(myword[i]);
	}

	_putchar('\n');
	return (0);
}
