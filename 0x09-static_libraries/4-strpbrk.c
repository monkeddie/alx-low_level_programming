#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strpbrk - Searches a string for any of a set of specified characters.
 * @s: The string to be searched.
 * @accept: The string containing the characters to be searched for.
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 *         or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
