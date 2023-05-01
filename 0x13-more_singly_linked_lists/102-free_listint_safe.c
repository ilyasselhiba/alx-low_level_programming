#include "lists.h"
/**
 * free_listint_safe - free to the link of the list
 * @h: pointer to the first node in the linked list
 * Return: the number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lend = 0;
	int diffc;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffc = *h - (*h)->next;
		if (diffc > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lend++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lend++;
			break;
		}
	}

	*h = NULL;

	return (lend);
}
