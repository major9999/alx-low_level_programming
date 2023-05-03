#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - a=iojuqwndiuwqdiuwqd.
  * @head: qwdqwdwegrthtre.
  * @n: rthrthgasdsadwqasd.
  * Return: wqdqwtrhwqdqwdwq.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *paxnewnh;
	listint_t *paxtem;

	if (head == NULL)
		return (NULL);
	paxnewnh = malloc(sizeof(listint_t));
	if (paxnewnh == NULL)
		return (NULL);
	paxnewnh->n = n;
	paxnewnh->next = NULL;
	if (*head == NULL)
	{
	*head = paxnewnh;
		return (paxnewnh);
	}

	paxtem = *head;

	while (paxtem->next != NULL)

	{
		paxtem = paxtem->next;
	}

	paxtem->next = paxnewnh;
	return (paxnewnh);
}
