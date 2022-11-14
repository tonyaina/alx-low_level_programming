#include "main.h"

/**
 * _strpbrk - matches any characters specified
 * @s: this is the C string to be scanned.
 * @accept: these are char in str1 that matches one of the char in str2
 * Return:  string s that matches any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}

	return (0);
}
