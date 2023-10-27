#include "main.h"

/**
 * _abs - function to check if the integer is absolute or not
 * @n: target
 *
 * Return: absolute of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
