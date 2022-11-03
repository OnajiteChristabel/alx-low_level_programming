#include "main.h"
<<<<<<< HEAD
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer of an unsigned int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
=======

/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 1 at index (...00100...) to work on that index */
	mask <<= index;
	*n = (*n | mask);

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
	return (1);
}
