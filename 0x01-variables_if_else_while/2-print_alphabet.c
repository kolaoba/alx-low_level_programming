#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - program prints alphabet
 *
 * Description - program prints the alphabet in lowercase
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	/* your code goes there */
	for(ch='a';ch<='z';ch++)
	{
	putchar(ch);
	}
	return (0);
}
