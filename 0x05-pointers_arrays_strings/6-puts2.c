#include "main.h"
#include <stdio.h>
/**
 * puts2 - program prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
	if (index % 2 == 0)
		printf("%c", str[index]);
	index++;
	}
	_putchar('\n');
}
