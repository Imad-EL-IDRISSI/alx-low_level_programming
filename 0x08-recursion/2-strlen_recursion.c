#include"main.h"

/**
 * _strlen_recursion - function that return the length of the string given
 * @s : the string concerned
 * Return : 0 if the string is empty
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;

	return 1 +_strlen_recursion(s + 1);
}
