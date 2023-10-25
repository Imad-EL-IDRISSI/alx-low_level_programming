#include "main.h"

/**
 *  _puts_recursion(char *s): Function that print a string followed by new line
 * @s: is the pointer to the string
 * Return : void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
