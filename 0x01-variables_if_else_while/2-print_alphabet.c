#include <stdio.h>
/**
 * main - Entry point
 * Description: programme that prints aphabets a-z
 * Return: 0
 */
int main(void)
{
	char alphabets;

	alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		++alphabets;
	}
	putchar('\n');

	return (0);
}
