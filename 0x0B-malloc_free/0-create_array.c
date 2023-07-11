#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: The size of the array
 * @h: The character used for initialization
 *
 * Return: Pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char h)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = h;
	}

	return (array);
}

