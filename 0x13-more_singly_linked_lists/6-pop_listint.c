#include "lists.h"

/**
 * pop_listint - Deletes the node of the linked list's head .
 * @head: Pointer to an element at the top of the linked list .
 *
 * Return: The data stored inside the elements that were deleted .
 * or if the list is empty 0 .
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}

