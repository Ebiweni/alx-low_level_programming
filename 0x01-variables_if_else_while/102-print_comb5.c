#include <stdio.h>
/**
 * main - all possible combo of two two numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b && b != a)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');

				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
					break;
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
