#include "lists.h"

/**
 * print_listint - Writes all the elements of a linked list .
 * @h: The linked list of type listint_t to write .
 *
 * Return: The nodes number .
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
