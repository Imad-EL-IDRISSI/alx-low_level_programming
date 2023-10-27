#include "main.h"

/**
 * *_strchr - Locate character in string
 * @s: string used
 * @c: the character wanted to locate
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
