#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and
 *              prints whether the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() % 201 - 100;

	printf("The number is: %d\n", n);

	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");

	return (0);
}
