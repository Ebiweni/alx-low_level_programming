#include <stdio.h>
/**
 * main - entry point
 * description: print
 * Return: 0
*/

int main(void)
{
	int num, alph;

	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; ++alph)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
