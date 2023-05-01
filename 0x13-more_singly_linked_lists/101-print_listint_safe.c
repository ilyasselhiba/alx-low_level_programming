#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts t n
 * of unique
 * in the loop listint_t link to the list.
 * @head: A pointer to head of listint_t to the check.
 * Return: If the list is not looped so its gonna be - 0.
 * Otherwise - the number of unique ns in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *subarashe, *haru_desu;
	size_t ns = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	subarashe = head->next;
	haru_desu = (head->next)->next;

	while (haru_desu)
	{
		if (subarashe == haru_desu)
		{
			subarashe = head;
			while (subarashe != haru_desu)
			{
				ns++;
				subarashe = subarashe->next;
				haru_desu = haru_desu->next;
			}

			subarashe = subarashe->next;
			while (subarashe != haru_desu)
			{
				ns++;
				subarashe = subarashe->next;
			}

			return (ns);
		}

		subarashe = subarashe->next;
		haru_desu = (haru_desu->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Print a listint_t to thelist safely
 * @head: the pointer to the head of the listint_t list
 * Return: A number of ns in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ns, index = 0;

	ns = looped_listint_len(head);

	if (ns == 0)
	{
		for (; head != NULL; ns++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < ns; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (ns);
}
