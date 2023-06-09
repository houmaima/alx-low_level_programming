#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints the character c to standard output .
 * @c: Print the character .
 *
 * Return: If success 1 .
 * On error, -1 is returned, and errno is set appropriately .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
