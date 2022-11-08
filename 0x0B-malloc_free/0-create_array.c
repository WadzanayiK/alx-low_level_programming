#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, or NULL if size = 0 or fail
 */

char *create_array(unsigned int size, char c);
{
	char *array;
	unsigned int	i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
		array[i++] = c;
	return (array);
}

