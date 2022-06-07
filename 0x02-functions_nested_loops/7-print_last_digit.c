#include "main.h"
/**
 * print_last_digit - program prints the last of a number
 * @n: number to be checked
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	_putchar(last_digit);
}
