#include "main.h"

/*
 * return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, size;
	size = n;
	for (i = 0; i < size; i++)
		s[i] = b;
	return (s);
}
