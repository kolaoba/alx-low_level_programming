#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program prints alphabets
 *
 * Description - program prints the alphabet in lowercase then reverse
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	/* your code goes there */
	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
