#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program prints all possible combination of three digits
 *
 * Description - program prints all possible combination of three digits
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int num1;
	int num2;
	int num3;

	/* your code goes there */
	for (num1 = 0 ; num1 < 8 ; num1++)
	{
	for (num2 = num1 + 1 ; num2 < 9 ; num2++)
	{
	for (num3=num2 + 1 ; num3 < 10 ; num3++)
	{	
	putchar((num1 % 10) + '0');
	putchar((num2 % 10) + '0');
	putchar((num3 % 10) + '0');
	if (num1 == 7 && num2 == 8 && num3 == 9)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
