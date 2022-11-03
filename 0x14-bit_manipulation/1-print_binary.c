#include "main.h"
<<<<<<< HEAD
/**
 * print_binary - prints the binary representation
 * of a number
 * @n: unsigned long int
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
=======
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int n_copy = n, mask = 1;
	int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	len -= 1;
	if (len > 0)
		mask = mask << len;
	while (mask > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	}
}
