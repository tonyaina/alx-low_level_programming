#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: count arguments
 * @argv: arguments vector
 * 
 * Return:Always 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	if (argc == 3)
	{

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}

	printf("Error\n");
	return (1);
}
