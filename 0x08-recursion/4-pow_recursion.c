#include"main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1); /* Error: negative exponent */
    if (y == 0)
        return (1); /* x^0 is 1 */
    if (y == 1)
        return (x); /* x^1 is x */
    return (x * _pow_recursion(x, y - 1)); /* Recursive call to calculate x^y */
}
