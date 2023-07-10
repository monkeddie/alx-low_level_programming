#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - Copies a block of memory from source to destination.
 * @dest: Pointer to the destination memory block.
 * @src: Pointer to the source memory block.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory block.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
