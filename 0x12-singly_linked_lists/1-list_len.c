#include "lists.h"
/*
 *list_len - fuction returns list of elements
 *
 *@h: head paramter node
 *
 * Return: elements
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}

