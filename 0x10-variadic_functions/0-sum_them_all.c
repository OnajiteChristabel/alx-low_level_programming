#include "variadic_functions.h"
<<<<<<< HEAD
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: the numbers of parameters to be calculated
 * @...: variable numbers of parameters to be calculated
 * Return: n == 0, then return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
	}
=======

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	/* validate valist and initialize */
	if (n == 0)
		return (0);
	va_start(valist, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);

	return (sum);
}
>>>>>>> c813b95e88b1939967b005ac0954cb75787c4356
