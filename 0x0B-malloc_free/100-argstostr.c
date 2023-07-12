#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int totalLen = 0;
	char *concatenated;
	int pos;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
		totalLen += strlen(av[i]);
	/* Add space for the newlines */
	totalLen += ac;

	/* Allocate memory for the concatenated string */
	concatenated = malloc((totalLen + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	pos = 0;

	/* Copy each argument and append newline */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[pos] = av[i][j];
			pos++;
		}
		concatenated[pos] = '\n';
		pos++;
	}

	concatenated[pos] = '\0';

	return (concatenated);
}
