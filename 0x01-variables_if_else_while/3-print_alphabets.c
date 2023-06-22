#include <stdio.h>
/**
 *main - Entry point
 *Description: 'code to alphabets in lower case and upper case'
 *Return: Always 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	putchar (n);
		n++;
	}

	int m = 65;

	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar ('\n');
	return (0);
}
