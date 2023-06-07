#include "lists.h"

/**
 * add_nodeint - At the beginning of a linked list a new node is added .
 * @head: the pointer of the first node in the list .
 * @n: the data to put in the  new node .
 *
 * Return: pointer to the new node, if it fails NULL .
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
