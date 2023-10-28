#include <stdio.h>
#include <libgen.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	char *program_name = stdrup(basename(argv[0]));

	if (program_name != NULL)
	{
		printf("%s\n", program_name);
		free(program_name);
		return (0);
	}
	return (1); // Error case
}
