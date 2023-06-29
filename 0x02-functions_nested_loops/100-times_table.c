#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the times table for a given number n.
 * @n: The number for which the times table is printed.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
				printf(", ");
			printf("%d", result);
		}
		putchar('\n');
	}
}
