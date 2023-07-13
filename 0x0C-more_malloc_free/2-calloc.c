#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array and initializes to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}
