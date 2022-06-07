#include <stdio.h>
/**
 * main - program prints the sum of even-valued fibonacci terms less than 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib0 = 0, fib1 = 1, next_term, sum = 0;

	for (count = 0; count < 50; count++)
	{
		next_term = fib0 + fib1;

		if ((next_term % 2 == 0) || next_term < 4000000)
		{
			sum += next_term;
		}

		fib0 = fib1;
		fib1 = next_term;



	}
	printf("%lu\n", sum);
	return (0);
}
