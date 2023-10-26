#include"main.h"

/**
 * _sqrt_helper - Helper function to find the square root using recursion.
 * @n: The number we want to calculate it square.
 * @guess: the guess for the square root.
 *
 * Return: the square root of num, -1 otherwise.
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess < n)
		return (_sqrt_helper(n, guess + 1));
	return (-1);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: the natural square root, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 0));
}
