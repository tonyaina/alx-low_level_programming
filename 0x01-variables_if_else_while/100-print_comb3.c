#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int x;
	int y;

	for (x = 01; x < 10; ++x)
	{
		for (y = 01; y < 10; ++y)
		{
			putchar(x + '0' && y + '0');
			if ((x > 9) || (y < 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
