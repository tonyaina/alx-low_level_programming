#include "main.h"

/**
 * _puts_recursion - function like puts
 *
 * @s: input string to print
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	char result = sum(10);

	printf("%d", result'\n');
	return (0);
}

void _puts_recursion(char *s)
{
	if (*s > 0)
	{
		return (*s + sum(*s - 1));
	}
	else
	{
		return (0);
	}
}
