#include "main.h"
#include <stdio.h>

/**
 * create_array - program creates an array of chars and intitalizes it with a specifc char.
 * @size: size of array to be initialized
 * @c: character to initilialize array with
 *
 * Return: 0 if size is NULL or the function fails
 *         else, a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
