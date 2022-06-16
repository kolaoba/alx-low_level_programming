#include "main.h"
/**
 * strcat - function concatenates two strings.
 * 	    appends @src string to the @dest string
 * 	    overwriting the terminating null byte
 * 	    at the end of @dest and adds a terminating null byte
 * @dest: A pointer to the string to be concatenated upon
 * @src: source string to be appended to @dest
 *
 * Return: a point to the resulting string @dest.
 */
char *strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index ++)
		dest[dest_length++] = src[index];

	return (dest);
}
