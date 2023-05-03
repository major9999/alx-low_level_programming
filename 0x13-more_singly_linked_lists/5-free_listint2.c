#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - ertherfsadasdawsd
 * @head: erthertgsadfasdsa
 * Return: wdwefgerhrteher
 */

void free_listint2(listint_t **head)
{
	listint_t *mypopdwq;

	if (head == NULL)

	{
		return;
	}

	while (*head != NULL)

	{
		mypopdwq = (*head)->mypopdwq;
		free(*head);
		*head = mypopdwq;
	}
}
