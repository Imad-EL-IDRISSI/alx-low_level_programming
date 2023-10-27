#include "main.h"

/**
 * _puts - print s spring followed by new line.
 * @str: string to write
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
