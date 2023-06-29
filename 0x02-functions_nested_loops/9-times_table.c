#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j != 0)
				printf(", ");
			printf("%d", result);
		}
		putchar('\n');
	}
	times_table();

	return (0);
}
