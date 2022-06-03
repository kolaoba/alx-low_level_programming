#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program prints numbers in base 16
 *
 * Description - program prints single characters
 * from zero in base 16 using only putchar
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int num;
	char ch;

	/* your code goes there */
	for (num = 0 ; num < 10 ; num++)
	{
	putchar(num + '0');
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
	putchar(ch)
	}
	putchar('\n');
	return (0);
}
