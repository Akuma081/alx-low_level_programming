#include "main.h"
#include <stdio.h>

/**
 * main - the name of a program is being printed by the program
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);

	return (0);
}
