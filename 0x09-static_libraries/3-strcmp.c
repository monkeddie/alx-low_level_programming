#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: An integer less than, equal to, or greater than 0
 * if s1 is less than,
 * equal to, or greater than s2, respectively.
 */

int _strcmp (char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
