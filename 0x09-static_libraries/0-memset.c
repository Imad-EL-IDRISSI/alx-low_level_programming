#include "main.h"

/**
 * *_memset - Set memory content
 * @s: memory area
 * @b: constant byte
 * @n: byte filled
 *
 * Return: pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
