#include "main.h"

/**
*num - recursively divide by higher divisor, skip even nums
* @n: number to check if prime
* ans: divisor
* Return: 1 if prime, 0 if not, or recursive function call
*/

int num(int n, int ans)
{
	if (ans > n)
		return (0);
	if (n % ans == 0)
		return (0);
	if (ans == n)
		return (1);
	return (num(n, ans + 1));
}

/**
* is_prime_number - check if prime
* @n: number to check
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (num(n, 0));
}
