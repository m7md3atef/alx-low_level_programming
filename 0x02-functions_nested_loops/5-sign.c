#include "main.h"


	/**
	 * print_sign - prints the sign of a number
	 * @n: the number to check
	 * Return: 1  print + if positive
	 * 0  print 0 if n is zero
	 * -1  print - if n is negative
	 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

