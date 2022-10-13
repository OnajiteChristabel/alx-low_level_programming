#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print
 * @separator: char
 * @n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list num;

	if (separator == NULL)
		return;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(num, int);
		printf("%i%s", s, separator);
	}
	printf("\n");
	va_end(num);
}
