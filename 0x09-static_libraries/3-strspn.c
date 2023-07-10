#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - Calculates the length of the initial segment of a string
 *           consisting of only specific characters.
 * @s: The string to be analyzed.
 * @accept: The string containing the characters to be searched for.
 *
 * Return: The length of the initial segment of s
 * containing only the characters found in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
