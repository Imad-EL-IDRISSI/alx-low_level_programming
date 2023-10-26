#include"main.h"

/**
 * _pow_recursion - function that return x raised to the power of y
 *
 * @x: the number we want to calculate it power
 * @y: the power we want
 *
 * Return: the power of x^^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y = 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
