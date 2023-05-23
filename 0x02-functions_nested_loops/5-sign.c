#include "main.h"

/**
 * print_sign - return 1 and print + if n > 0
 * returns 0and prints 0 if n = 0
 * returns -1 and prints - if n < 0
 * @n: character to be checked
 * Return: 1 0 -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
