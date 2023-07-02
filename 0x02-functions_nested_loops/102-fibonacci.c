#include <stdio.h>
/**
 * main - Entry point
 * Description: code to prinf 50 fibonacci numbers
 * Return: Always 0
 **/
void fibonacci_sequence(int n, int sequence[]);
int main(void)
{
	int i;
	int fib_sequence[50];

	fib_sequence[0] = 1;  /** First number */
	fib_sequence[1] = 2;  /** Second number */

	/** Generate the Fibonacci sequence */
	fibonacci_sequence(50, fib_sequence);

	/** Print the Fibonacci numbers separated by comma and space */
	for (int i = 2; i < 50; i++)
	{
	printf("%d", fib_sequence[i]);
	if (i != 49)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
void fibonacci_sequence(int n, int sequence[]) 
{
	int i;

	sequence[0] = 1;  /** First number */
	sequence[1] = 2;  /** Second number */

	for (i = 2; i < n; i++) 
	{
	sequence[i] = sequence[i - 1] + sequence[i - 2];
	}
}
