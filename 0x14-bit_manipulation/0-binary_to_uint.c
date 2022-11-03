<<<<<<< HEAD
#include "main.h"
/**
 * binary_to_unit - converts a binary number to an
 * unsigned int
=======
#include <string.h>
#include "math.h"
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);
	ui = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			ui += base_two;
		}
	}
	return (ui);
=======
	unsigned int num = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
