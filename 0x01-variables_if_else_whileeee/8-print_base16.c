#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Expected Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int aphal = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (aphal <= 'f') /*print aphal to finish hexbase*/
	{
		putchar(aphal);
		aphal++;
	}

	putchar('\n');

	return (0);
}
