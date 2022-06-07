#include "main.h"
/**
 * times_table - program prints out the nine times table
 *
 * Return: nine times table
 */
void times_table(void)
{
	int m = 0;
	int n;

	while (m <= 9)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar((m * n) + '0');
			_putchar(',');
		}
		_putchar('\n');
		m++;
	}
}
