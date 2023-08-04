#include "main.h"

/**
 * clear_bit -fnuction that sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @j: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int j)
{
	if (j > 63)
		return (-1);

	*n = (~(1UL << j) & *n);
	return (1);
}
