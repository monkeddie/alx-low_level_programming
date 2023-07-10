#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /*marking argv as unused*/
	(void)argc; /*marking argc as unused*/

	printf("%d\n", argc - 1);
	return (0);
}
