#include"main.h"

/**
 * _strlen_recursion - function that return the length of the string given
 * @s: the string concerned
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0); /* Base case: End of the string, length = 0 */
	/* Recursive call of the function with the next character and add 1 */
	return (1 + _strlen_recursion(s + 1));
}
