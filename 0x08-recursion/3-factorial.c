#include "main.h"

/**
 * int factorial - function that return the factorial of a integer given
 * @n: the integer we want to calculate the integer
 *
 * Return: the value of the factiorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
