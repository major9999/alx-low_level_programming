#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - just a simple function for the project.
 * @h: the list iwjqdiowqdqw.
 * Return: just size_T i think it's clear.
 */

size_t print_list(const list_t *h)
{
	int macow;

	macow = 0;

	while (h)

	{
		if (h->str == NULL)

		{
			printf("[0] (nil)\n");
		}

		else

		{
			printf("[%d] %s\n", h->len, h->str);
		}

		macow++;
		h = h->next;
	}

	return (macow);
}
