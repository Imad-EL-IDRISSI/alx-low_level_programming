#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL)
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
