/**
 * Author: Alfonse Juma Philip
 * File:1-list_len.c
 * Date: 23.01.2023
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Find number of elements in
 * the linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */


size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
