#include <stdio.h>
/**
 *main - entry point
 *Description: 'code that prints numbers with , and space'
 *Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
