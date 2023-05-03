#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - dqwdwetgfwergw
 * @head: wqdqwdqwdwqdr
 *Return: trhwqdqwdqwd
 */

int pop_listint(listint_t **head)

{
	listint_t *mypso;
	int nextnum;

	if (head == NULL || *head == NULL)

	{
		return (0);
	}

	mypso = *head;
	*head = mypso->next;
	nextnum = mypso->nextnum;
	free(mypso);

	return (nextnum);
}
