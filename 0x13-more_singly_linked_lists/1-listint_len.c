#include "lists.h"
/**
* listint_len - returns the number of elements in a linked
* @h: parameter
*
* Return: size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
