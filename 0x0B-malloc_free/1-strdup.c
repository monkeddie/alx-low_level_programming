#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	duplicate = malloc(len * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}
