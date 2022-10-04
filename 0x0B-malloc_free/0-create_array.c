#include "main.h"
#include <stdlib.h>

/**
* create_array - create array of chars and initialize with a specific char
* @size: size of array
* @c: fill array values with this char
* Return: pointer to
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *me;

	if (size <= 0)
		return (NULL);
	me = malloc(size * sizeof(char));
	if (me == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(me + i) = c;
	*(me + i) = '\0';
	return (me);
}
