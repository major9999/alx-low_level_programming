#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

int cmytwo(const char *kiojudh);

/**
 * add_node - a function for the aske of project list.
 * @head: hthe first argument.
 * @str: the second arugemnt.
 * Return: returens a list_t type of sturcutre.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *myprivlist;

	myprivlist = malloc(sizeof(list_t));

	if (myprivlist == NULL)

	{
		return (NULL);
	}

	myprivlist->str = strdup(str);
	myprivlist->next = *head;
	myprivlist->len = cmytwo(str);

	*head = myprivlist;

	return (myprivlist);
}

/**
 * cmytwo - a fynction for the sake of the project.
 * @kiojudh : the first artugment.
 * Return: an int variable return type.
 */

int cmytwo(const char *kiojudh)

{
	int i = 0;

	while (kiojudh[i] != '\0')

	{
		i++;
	}

	return (i);
}
