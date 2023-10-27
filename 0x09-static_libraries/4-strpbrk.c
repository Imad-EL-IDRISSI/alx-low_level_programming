#include "main.h"

/**
 * *_strpbrk - Search a string for any set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer if it matches, NULL otherwise.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
