#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 1, i2, j2;
	char *new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		i++;
		len++;
	}
	while (*(s2 + j))
	{
		j++;
		len++;
	}
	new = malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	len = 0;
	for (i2 = 0; i2 <= i; i2++)
	{
		if (*(s1 + i2) == '\0')
			break;
		*(new + len) = *(s1 + i2);
		len++;
	}
	for (j2 = 0; j2 <= j; j2++)
	{
		*(new + len) = *(s2 + j2);
		len++;
	}
	return (new);
}
