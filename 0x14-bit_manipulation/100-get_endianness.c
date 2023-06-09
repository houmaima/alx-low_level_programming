#include "main.h"

/**
 * get_endianness - Checks to see if the machine's small or large endian .
 * Return: 0 for big, 1 for little .
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
