#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: string to duplicate
* Return: pointer to duplicated string in allocated memory
*/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *st;

	if (str == NULL)
		return (NULL);
	while (*(str + j))
		j++;
	j++;
	st = malloc(j * sizeof(char));
	if (st == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
		*(st + i) = *(str + i);
	return (st);
}
