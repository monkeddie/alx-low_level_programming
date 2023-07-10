#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - Copies a specified no of characters from source to destination.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied.
 *
 * Return: The pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
