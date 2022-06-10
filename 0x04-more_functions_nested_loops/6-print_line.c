#include "main.h"
/**
 * print_line - program draws a straight line in the terminal
 * followed by a new line
 * @n: length of line
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
