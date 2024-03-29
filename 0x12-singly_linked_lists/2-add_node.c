/**
 * Author: Alfonse Juma Philip
 * File: 2-add_node.c
 * Date: 23.01.2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - will add a new node at the beginning
 * of the list_t list
 * @head: points to the head of list_t list
 * @str: string to add to the list_t list
 *
 * Return: Null if the function fails
 */


list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
