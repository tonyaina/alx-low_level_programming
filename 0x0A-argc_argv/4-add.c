#include <stdio.h>
#include <stdlib.h>
#include <cttype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv:: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = j; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
