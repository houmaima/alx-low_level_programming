#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1 .
 * @n: The number to change is pointed .
 * @index: The index of the bit to set to 1 .
 *
 * Return: 1 if succed, -1 if fails .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
