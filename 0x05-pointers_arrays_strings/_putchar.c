#include <stdio.h>

/**
 * _putchar - writes chharacter c to stdout
 * @c: char to be printed
 * Return: on success 1
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
