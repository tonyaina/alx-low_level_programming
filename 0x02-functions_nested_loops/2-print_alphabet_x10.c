#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 1; ten <= 10; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
