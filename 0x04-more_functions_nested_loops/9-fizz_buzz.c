#include <stdio.h>
/**
 * main - program prints numbers from 1 to 100 without 3, 5 
 * or multiples of both. Replace 3 with fizz and 5 with buzz
 * followed by a new line
 * 
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
