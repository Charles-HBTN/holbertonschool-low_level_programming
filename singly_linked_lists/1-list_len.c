#include "lists.h"
/**
 * list_len - the number of elements in a linked list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t life;
		life = 0;
	while (h != NULL)
	{
		h = h->next;
		life++;
	}
	return (life);
}
