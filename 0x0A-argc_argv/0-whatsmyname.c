#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the programme
 * @argc: count arguments
 * @argv: arguments value
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
