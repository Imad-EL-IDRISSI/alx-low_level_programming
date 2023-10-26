#include"main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

 /**
  * last_index - return the last index of a string
  * @s: pointer to string
  *
  * Return: int
  */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;
	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 if it's not.
 */

int is_palindrome(char *s)
{
	int end = last_index(s);
	return (check(s, 0, end - 1, end % 2));
}

/**
 * check -checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int move from left to right
 * @mod: int
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check(s, start + 1, end - 1, mod));
}
