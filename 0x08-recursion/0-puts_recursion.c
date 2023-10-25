#include<stdio.h>
#include "main.h"

/* _puts_recursion(char *s): Function that print a string
 * @*s is the pointer of the char s
 * Return : void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0'){
		return;
	} else{
		_putchar(*s);
		_puts_recursion(s+1);
	}
}
