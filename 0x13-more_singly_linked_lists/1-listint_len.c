#include "lists.h"
/**
 * listint_len - returns linked lists elements number
 * @h: linked list of type of the listint_t to the traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
