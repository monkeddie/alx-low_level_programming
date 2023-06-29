#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1; /* n is greater than zero */
	}
	else if (n == 0)
	{
		putchar('0');
		return 0; /* n is zero */
	}
	else
	{
		putchar('-');
		return -1; /* n is less than zero */
	}
}
