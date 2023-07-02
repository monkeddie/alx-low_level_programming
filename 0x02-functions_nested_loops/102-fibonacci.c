#include <stdio.h>
/**
 * main - Entry point
 * Description: code to prinf 50 fibonacci numbers
 * Return: Always 0
 **/
int main(void)
{
	long int prev1 = 1;  /** First number **/
	long int prev2 = 2;  /** Second number **/
	int i;

	printf("%ld, %ld", prev1, prev2);

	for (i = 2; i < 50; i++)
	{
	long int current = prev1 + prev2;

	printf(", %ld", current);

	prev1 = prev2;	/** So that the next num takes the value of the previous num**/
	prev2 = current;
	}
	printf("\n");

	return (0);
}
