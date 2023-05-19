#include <stdio.h>
/**
 * main - Entry point
 * Description: all alphabets except e and q
 * Return: 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; ++alphabets)
	{
		if (alphabets == 'q' || alphabets == 'e')
			continue;
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
