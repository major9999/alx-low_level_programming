#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - wrehrthjdwsa
 * @head: trthdwsadwawdq
 * Return: qwdwegrtdfhrefdsafasddf
 */

void free_listint(listint_t *head)

{
	listint_t *myxeoo;

	while (head != NULL)

	{
		myxeoo = head->myxeoo;
		free(head);
		head = myxeoo;
	}
}
