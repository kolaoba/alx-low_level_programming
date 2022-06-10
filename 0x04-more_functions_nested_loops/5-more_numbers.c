#include "main.h"
/**
 * more_numbers - program prints numbers from 0 to 14
 * 10 times followed by a new line
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if ( i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
