#include "main.h"

/**
 * print_alphabet_x10 - print a to z 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count;
	char alph;

	for (count = 1; count <= 10; ++count)
	{
		for (alph = 'a'; alph <= 'z'; ++alph)
		{
			_putchar(alph);
		}
	_putchar('\n');
	}
}
