#include "main.h"

/**
 * _strlen - function that calculate the length of a string
 * @s: the string we want to know it length
 *
 * Return: integer (length of string)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
