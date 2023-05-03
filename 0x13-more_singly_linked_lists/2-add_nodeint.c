#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - qwdwqdokiiawqdqwa
  * @head: qwdwqdwqdqwad
  * @n: int regerwgwefwef
  * Return: rehgerghwrefgewf
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *myprotpr;

	if (head == NULL)

	{
		return (NULL);
	}


	myprotpr = malloc(sizeof(listint_t));

	if (myprotpr == NULL)

	{
		return (NULL);
	}

	myprotpr->n = n;
	myprotpr->next = *head;
	*head = myprotpr;

	return (myprotpr);
}
