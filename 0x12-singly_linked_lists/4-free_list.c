#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a fynctyion for the sake of thie project.
 * @head: my furst arugemnt.
 *
 *
 * Return: Just Nothing.
 */

void free_list(list_t *head)

{
	if (head)

	{
		free_list(head->next);

		if (head->str)

		{
			free(head->str);
		}

		free(head);
	}

}
