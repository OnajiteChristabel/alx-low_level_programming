#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char s;
	va_list str;

	if (separator == NULL)
		return;
	va_start(str, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(str, char);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}