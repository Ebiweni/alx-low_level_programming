#include <stdio.h>
/**
 * main - entry point
 * description: print 0 to 9
 * Return: 0
*/

int main(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		++number;
	}
	putchar('\n');
	return (0);
}
