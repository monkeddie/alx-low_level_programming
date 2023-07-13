#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated allocated memory
 * If malloc fails terminate the process with the status value of 98
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failled.\n");
		exit(98); /* Terminate the process with status value 98 */
	}

	return (ptr);
}
