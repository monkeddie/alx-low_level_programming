#include <stdio.h>
/**
 * main - Entry point
 * Description: code to prinf 50 fibonacci numbers
 * Return: Always 0
 **/
int main(void)
{
	int prev1 = 1;  /** First number **/
	int prev2 = 2;  /** Second number **/

	printf("%d, %d", prev1, prev2);

	for (int i = 2; i < 50; i++)
	{
	int current = prev1 + prev2;
	printf(", %d", current);

	prev1 = prev2;	/** So that the next num takes the value of the previous num**/
	prev2 = current;
	}
	printf("\n");

	return (0);
}
