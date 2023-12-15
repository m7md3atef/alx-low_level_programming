#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: The converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == 0)
	{
		return (0);
	}

	unsigned int result = 0;

	while (*b != '\0')
	{

		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		int digit = *b - '0';

		result = (result << 1) + digit;

		b++;
	}

	return (result);
}
