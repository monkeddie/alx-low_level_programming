#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the sum of even Fibonacci numbers less than 4,000,000.
 *
 * Return: Always 0
 */

int main(void)
{
	long int prev1 = 1;
	long int prev2 = 2;
	long int current = 0;
	long int sum = 0;

	while (prev1 <= 4000000)
	{
		if (prev1 % 2 == 0)
		{
			sum += prev1;
		}

		current = prev1 + prev2;
		prev1 = prev2;
		prev2 = current;
	}

	printf("%ld\n", sum);

	return (0);
}
