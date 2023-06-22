#include <stdio.h>
/**
 *main - Entry point
 *Description: 'a code to print alphabets in lowercase using ascii'
 *Return: Alaways return 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
		putchar('\n');
	}
	return (0);
}
