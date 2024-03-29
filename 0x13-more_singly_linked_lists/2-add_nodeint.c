#include "lists.h"

/**
 * add_nodeint - used to add a node at the  beginning of the list
 * @head: poits to the first node
 * @n: new node data
 *
 * Return: pointer to the new node, or NULL if it fails
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
