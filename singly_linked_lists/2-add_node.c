#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *k;
	size_t kchar;

	k = malloc(sizeof(list_t));
	if (k == NULL)
		return (NULL);

	k->str = strdup(str);

	for (kchar = 0; str[kchar]; kchar++)
		;

	k->len = kchar;
	k->next = *head;
	*head = k;

	return (*head);
}
