#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
