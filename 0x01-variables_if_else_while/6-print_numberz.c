#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
