#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: the first node is in the linked list
 * @index: the index of the node is for return
 * Return: pointer to the node we're looking up for or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
