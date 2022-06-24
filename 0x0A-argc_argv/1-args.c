#include <stdio.h>

/**
 * main - prints number of arguments passed, follwed by a new line
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
