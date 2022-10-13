<<<<<<< HEAD
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: the string to be printed between the strings
 * @n:  the number of strings passed to the function
 * Return: If separator is NULL, don’t print it
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int i;

	va_start(string, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(string, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		}
	printf("\n");
		va_end(string);
=======
#include <stdio.h> /* printf */
#include "variadic_functions.h"

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(valist, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
>>>>>>> c813b95e88b1939967b005ac0954cb75787c4356
}
