#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program prints single digit numbers
 *
 * Description - program prints single digit numbers
 * from zero in base ten
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	/* your code goes there */
	for (num = 0 ; num < 10 ; num++)
	{
	printf("%d",num);
	}
	printf("\n");
	return (0);
}
