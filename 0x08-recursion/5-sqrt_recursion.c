#include"main.h"

/**
 * _sqrt_recursion - function that calculate  the natural square root of a number.
 *
 * @n: the integer we want to calculate it square.
 *
 * Return: the result of the natural square.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
        	return (-1);  /* Square root is not defined for negative numbers */

    	if (n == 0 || n == 1)
        	return (n);  /* Base cases: sqrt(0) = 0 and sqrt(1) = 1 */

    	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to find the square root using recursion.
 * @n: The integer for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The integer square root of the number, or -1 if it's not an integer square.
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return (guess);  /* Found the square root */

    if (guess * guess > n)
        return (-1);  /* n is not a perfect square, return -1 */

    return (_sqrt_helper(n, guess + 1)); /* Recursively increment the guess */
}
