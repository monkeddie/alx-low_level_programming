#include <stdio.h>
/**
 * main - entry point
 * Description: Prints first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 **/

int main(void)
{
	int i;
	long int prev1 = 1;
	long int prev2 = 2;
	long int current = 0;

	printf("%ld, %ld", prev1, prev2);

	for (i = 3; i <= 98; i++)
	{
		current = prev1 + prev2;
		printf(", %ld", current);
		prev1 = prev2;
		prev2 = current;
	}
	printf("\n");

	return (0);
}
