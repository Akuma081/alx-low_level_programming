#include <stdio.h>

/**
 * main - causes an indefinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("indefinite loop incoming :(\n");

	  i = 0;

	   while (i < 10)
	   {
		   putchar(i);
	   }

	   printf("infinite loop avoided! \\0/\n");
	   return (0);
}
