#include"main.h"

/**
 * _sqrt_helper - Helper function to find the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number, or -1 if it's not a perfect square.
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess; /* Found the square root */

    if (guess <= 0)
        return -1; /* The number is not a perfect square, return -1 */

    return _sqrt_helper(n, guess - 1);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of the number, or -1 if it's not a perfect square.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1; /* Square root is not defined for negative numbers */

    if (n == 0 || n == 1)
        return n; /* Base cases: sqrt(0) = 0 and sqrt(1) = 1 */

    return _sqrt_helper(n, n / 2);
}
