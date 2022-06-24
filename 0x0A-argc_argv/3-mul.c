#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplication of argumenets it receives
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if two arguments supplied, else 1 
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
