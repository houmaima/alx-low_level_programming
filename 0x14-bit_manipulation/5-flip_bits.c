#include "main.h"

/**
 * flip_bits - Calculates the number of bits to change .
 * for switching from one number to another .
 * @n: The first number .
 * @m: The second number .
 *
 * Return: The number of bits to be changed .
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
