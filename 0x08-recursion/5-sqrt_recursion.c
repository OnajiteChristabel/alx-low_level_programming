#include "main.h"

/**
* root - find square root of n, starting from the smallest possible, 0
* @n: n
* @ans: test this num
* Return: natural square root, or -1 if not natural root
*/

int root(int n, int ans)
{
	if (ans * ans == n)
		return (ans);
	if (ans * ans > n)
		return (-1);
	return (root(n, ans + 1));
}

/**
* _sqrt_recursion - find natural square root of n
* @n: n
* Return: natural square root, or -1 if not natural root
*/

int _sqrt_recursion(int n)
{
		return (root(n, 0));
}
