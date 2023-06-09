#include "main.h"

/**
 * clear_bit - Sets the value 0 to a given bit .
 * @n: The number to change is pointed .
 * @index: The index of the bit to clear .
 *
 * Return: 1 if succed, -1 if fails .
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
