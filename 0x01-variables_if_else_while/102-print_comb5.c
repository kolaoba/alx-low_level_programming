#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program prints all possible combination of two digits
 *
 * Description - program prints all possible combination of two digits
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int num1;
	int num2;

	/* your code goes there */
	for (num1 = 0 ; num1 <= 98 ; num1++)
	{
	for (num2 = num1 + 1 ; num2 <= 99 ; num2++)
	{
	putchar((num1 / 10) + '0');
	putchar((num2 % 10) + '0');
	putchar(' ');
	putchar((num2 / 10) + '0');
	putchar((num2 % 10) + '0');
	if (num1 == 98 && num2 == 99)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
