#include "main.h"
/**
 * print_triangle - program prints a triangle
 * followed by a new line
 * @size: length of line
 */
void print_triangle(int size)
{
	int ind;
	int pound;

	if (size > 0)
	{
		for (pound = 1; pound <= size; pound++)
		{
			for (ind = size - pound; ind < n; ind--)
				_putchar(' ');
			
			for (ind = 0; ind < pound; ind++)
				_putchar('#');

			if (pound == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
