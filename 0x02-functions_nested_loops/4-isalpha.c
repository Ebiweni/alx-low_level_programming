#include "main.h"
/**
 * _isalpha-check if character is lower case
 * @c: character to be checked
 * Return: 1 if lower or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}

