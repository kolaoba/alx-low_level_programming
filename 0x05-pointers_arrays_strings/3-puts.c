#include "main.h"
/**
 * _puts - program prints a string followed by a new linet to stdout
 * @str: input string
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
