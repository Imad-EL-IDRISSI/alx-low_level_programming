#include <stdio.h>

/**
 * main - Prints all arguments received, including the first one.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 - success.
 */
int main(int argc, char *argv[]) 
{
	for (int i = 0; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

