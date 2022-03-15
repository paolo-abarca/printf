#include "main.h"

/**
 * print_number - print all received numbers whether positive or negative
 *
 * @n: positive or negative numbers received
 * Return: the number of printed numbers and symbols
 */

int print_number(int n)
{
	int counter = 0;
	int r;

	if (n < 0)
	{
		_putchar ('-');
		counter = counter + 1;
		n = -(n);
	}

	if (n > 0)
	{
		if (n / 10)
		{
			counter = counter + 1;
			r = print_number(n / 10);
			counter = counter + r;
			_putchar(n % 10 + '0');
			return (counter);
		}

		else
		{
			_putchar (n + '0');
			counter = counter + 1;
		}
	}
	return (counter);
}
