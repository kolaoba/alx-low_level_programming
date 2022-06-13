#include "main.h"
/**
 * puts2 - program prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int length = 0, index = 0;

	while (str[index]++)
		length++;

	while (str[index] != '\0')
	{
	if (index % 2 == 0)
		_putchar(str[index]);
	index++;
	}

	_putchar('\n');
}
