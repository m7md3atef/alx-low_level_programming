#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, itterate = 0;
	unsigned long int instant;

	for (i = 63; i >= 0; i--)
	{
		instant = n >> i;

		if (instant & 1)
		{
			_putchar('1');
			itterate++;
		}
		else if (itterate)
			_putchar('0');
	}
	if (!itterate)
		_putchar('0');
}
