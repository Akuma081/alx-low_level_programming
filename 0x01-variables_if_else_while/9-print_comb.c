#include <stdio.h>

/**
 * main - main functions
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
		if (x == 10)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
