#include "main.h"
/**
 * print_rev - program prints a string in reverse.
 * @s: input string
 */
void print_rev(char *s)
{
	int length = 0;
	int index = 0;

	while (s[index++])
		length++;

	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
