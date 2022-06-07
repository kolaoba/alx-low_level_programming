#include <stdio.h>
/**
 * main - program prints sum of multiples of 3 and 5 under 1024
 *
 * Return: final sum
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum)
}
