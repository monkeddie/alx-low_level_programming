#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
