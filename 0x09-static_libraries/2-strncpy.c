#include "main.h"

/**
 * *_strncpy - Copy n characters of one string to another
 * @dest: destination
 * @src: source
 * @n: number of character to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
