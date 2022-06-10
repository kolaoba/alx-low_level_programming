#include "main.h"
/**
 * print_square - program prints a square using the # character
 * followed by a new line
 * @size: length of line
 */
void print_square(int size)
{
	int width;
	int height;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (height == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
