#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argc; /* make argc unused*/ 
	printf("%s\n", argv[0]);

	return (0);
}
