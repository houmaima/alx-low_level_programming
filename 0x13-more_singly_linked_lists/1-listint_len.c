#include "lists.h"

/**
 * listint_len - The number of elements  returns in a linked lists .
 * @h: The linked list of type listint_t to traverse .
 *
 * Return: the nodes number .
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
