#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;  /* Base case: End of the string, exit recursion */
	/* Recursively call the function with the next character */
	_print_rev_recursion(s + 1);
	/* Print the current character after the recursive call */
	putchar(*s);
}
