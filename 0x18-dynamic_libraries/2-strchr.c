#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: another character
 * Return: a string
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
