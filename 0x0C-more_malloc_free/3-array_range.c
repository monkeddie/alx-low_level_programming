#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * array_range - Creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
