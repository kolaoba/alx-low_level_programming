#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is an alphabet, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
