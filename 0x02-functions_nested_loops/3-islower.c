#include "main.h"

/**
 * _islower(int c)-print lowercaseletters
 * @c: character to check
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 122)
		return (1);
	else
		return (0);
	_putchar ('\n');
}
