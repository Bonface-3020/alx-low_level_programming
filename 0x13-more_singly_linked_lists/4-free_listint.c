#include "lists.h"

/**
 * free_listint - this frees a list_t from a list
 * @head: node to freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
