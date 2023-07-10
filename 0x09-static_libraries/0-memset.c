#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the memory block to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be set to the value.
 *
 * Return: Pointer to the memory block.
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
