#include <stdio.h>

/**
 * main - prints program name, follwed by a new line
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
