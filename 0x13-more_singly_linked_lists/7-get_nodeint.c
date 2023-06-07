#include "lists.h"

/**
 * get_nodeint_at_index - Returns node in the linked list at a given index .
 * @head: The first node of the linked list .
 * @index: The index of the node that's to be returned .
 *
 * Return: Pointer to a node we're looking for, or NULL .
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
