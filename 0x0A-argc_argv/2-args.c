#include <stdio.h>
/**
 * main - prints all arguments passed it receives
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	       printf("%s\n", argv[index]);

	return (0);
}
