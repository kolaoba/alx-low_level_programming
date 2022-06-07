#include <stdio.h>
/**
 * main - program prints the first 50 fibonacci numbersstarting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib0, fib1, sum;
	
	for (count = 0; count < 50; count++)
	{
		sum = fib0 + fib1;
		printf("%lu", sum);

		fib0 = fib1;
		fib1 = sum;
		
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ")
		}
	}
	return (0);
}
