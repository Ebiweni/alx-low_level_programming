#include <stdio.h>
/**
 * main - Entry point
 * Description: programme that prints lower/uppercase letters
 * Return: 0
 */

int main(void)
{
	char alphabets, ALPHABETS;

	alphabets = 'a';
	ALPHABETS = 'A';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		++alphabets;
	}
	while (ALPHABETS <= 'Z')
	{
		putchar(ALPHABETS);
		++ALPHABETS;
	}

	putchar('\n');
	return (0);
}
