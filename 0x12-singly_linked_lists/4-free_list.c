/**
 * Author: Alfonse Juma Philip
 * File: 4-free_list.c
 * Date: 23.01.2023
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
