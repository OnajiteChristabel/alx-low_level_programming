#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *ptr;

	for (i = 0; s1 != '\0'; i++)
		*(s1 + i);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *s2 != '\0'; i++)
		*(s2 + i);
	if ((int)n >= i)
		n = i;
	ptr = malloc((i + 1) * n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		ptr[j] = s1[j];
	i = 0;
	while (i <= (int)n)
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);

}
