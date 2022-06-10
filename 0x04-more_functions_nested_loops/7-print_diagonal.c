#include "main.h"
/**
 * print_diagonal - program draws a diagonal line in the terminal
 * followed by a new line
 * @n: length of line
 */
void print_diagonal(int n)
{
	int length;
	int spaces;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (spaces = 0; spaces < n; spaces++)
				_putchar(' ');
			_putchar('\\');

			if (length == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
