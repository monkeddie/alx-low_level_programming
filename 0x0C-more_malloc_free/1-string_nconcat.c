#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate from s2.
 *  Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int concat_len = 0;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_len = s1_len + (n >= s2_len ? s2_len : n);

	result = malloc((concat_len + 1) * sizeof(char));

	if (result == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
