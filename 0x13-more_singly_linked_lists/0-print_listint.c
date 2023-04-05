#include "lists.h"

/**
 * print_listint -prototype printing elements in a list
 * @h: A pointer to the head of the list_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
