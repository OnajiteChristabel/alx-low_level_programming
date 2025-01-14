#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable numbers of integer
 * Return: If separator is NULL, don’t print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(nums, int));
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
printf("\n");
va_end(nums);
}
