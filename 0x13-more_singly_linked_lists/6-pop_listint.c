#include <stdlib.h>
#include "lists.h"


/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 * Return: Just nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
