#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: The pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
