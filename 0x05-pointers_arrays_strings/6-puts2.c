#include "main.h"
/**
 * _puts2 - program prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int length = 0, index = 0;
	while (str[index]++)
		length++;

	for (index = 0; index <= length; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
