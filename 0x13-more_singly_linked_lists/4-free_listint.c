#include "lists.h"

/**
 * free_listint - It frees a list which is linked .
 * @head: listint_t a freed list .
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
