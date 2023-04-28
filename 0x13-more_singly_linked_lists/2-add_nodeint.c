#include "lists.h"
/**
 * add_nodeint - adds a new node at th of his le beginning of a linked list
 * @head: pointer to the first node in the yes of list
 * @n: data to insert in that the of his new node
 * Return: the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
