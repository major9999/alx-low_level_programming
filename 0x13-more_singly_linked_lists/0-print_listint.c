#include <stdio.h>
#include "lists.h"

/**
 * print_listint - qoiwidhjuiwqdiuhwqioudhjwq.
 * @h: qpoiwidjiuowqdjiowqd.
 * Return: oiqwdhuiwqdhiuwqndi
 */

size_t print_listint(const listint_t *h)
{
	size_t nypsowq = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		h = h->next;
		nypsowq++;
	}

	return (nypsowq);
}