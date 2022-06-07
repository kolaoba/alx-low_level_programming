#include <stdio.h>
/**
 * print_to_98- program prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: numbers separated by comma and space
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
			
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n". n);
	}
}
