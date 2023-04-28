#include <stdlib.h>
#include "lists.h"
#include <string.h>

unsigned int mystroisnq(char *myworkingst);

/**
 * add_node_end - a fynction for the sake of the project.
 * @head: the first argument my function.
 * @str: the second arguemnt for the mfunbction.
 * Return: a list_t return type as stated below.
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *nesppuq;
	list_t *treponqx;

	if (str == NULL)
	{
		return (NULL);
	}

	nesppuq = malloc(sizeof(list_t));
	if (nesppuq == NULL)
	{
		return (NULL);
	}

	nesppuq->str = strdup(str);
	if (nesppuq->str == NULL)
	{
		free(nesppuq);
		return (NULL);
	}

	nesppuq->len = mystroisnq(nesppuq->str);
	nesppuq->next = NULL;

	if (*head == NULL)
	{
		*head = nesppuq;
		return (nesppuq);
	}

	treponqx = *head;
	while (treponqx->next)
	{
		treponqx = treponqx->next;
	}

	treponqx->next = nesppuq;

	return (nesppuq);
}

/**
 * mystroisnq - finds the length of a string
 * @myworkingst: string to find the length of
 *
 *
 * Return: length of string
 */

unsigned int mystroisnq(char *myworkingst)
{
	unsigned int mycounter;

	mycounter = 0;

	while (myworkingst[mycounter] != '\0')

	{
		mycounter++;
	}

	return (mycounter);
}
