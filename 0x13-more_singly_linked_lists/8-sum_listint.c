#include "lists.h"

/**
 * sum_listint - siouqwudhuijwqdhuiqwdhuiwq.
 * @head: erhrthgdwqdqw
 * Return: qwdwegtrhrthwqd
 */

int sum_listint(listint_t *head)

{
	int sum = 0;

	while (head != NULL)

	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
