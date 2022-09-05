#include "main.h"
/**
 * _isdigit - program checks for a digit
 * @c: character to be checked
 *
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
