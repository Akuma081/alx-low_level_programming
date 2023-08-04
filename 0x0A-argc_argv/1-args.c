#include <stdio.h>
/**
 * main - function that prints  all the arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
