#include "main.h"

/**
 * factorial - function that return the factorial of an integer given.
 * @n: the integer we want to calculate the integer.
 *
 * Return: the factiorial of the num, -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1); /* factorial is not defined for negative */
	if (n == 0 || n = 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
