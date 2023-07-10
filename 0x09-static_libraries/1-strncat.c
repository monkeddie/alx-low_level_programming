#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates specified no of character from source to destination
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of characters to append.
 * Return: The pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
