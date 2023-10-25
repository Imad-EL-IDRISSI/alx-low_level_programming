#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return -1;  /* Factorial is not defined for negative numbers */
	if (n == 0 || n == 1)
		return 1;  /* Base case: 0! and 1! are both 1 */

	/* Recursively call the function with (n-1) and multiply by n */
	return n * factorial(n - 1);
}
