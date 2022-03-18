#include "main.h"

/**
 * char_mod - function that prints characters
 *
 * @parameters: undefined arguments
 * Return: 1 for the string_value
 */

int char_mod(va_list parameters)
{
	char value_c;

	value_c = va_arg(parameters, int);
	_putchar(value_c);

	return (1);
}

/**
 * string_mod - to print a string
 *
 * @parameters: undefined arguments
 * Return: text string counter
 */

int string_mod(va_list parameters)
{
	int i;
	char *value_s;
	int counter = 0;

	value_s = va_arg(parameters, char *);

	if (value_s == NULL)
		value_s = "(null)";

	for (i = 0; value_s[i] != '\0'; i++)
	{
		_putchar(value_s[i]);
		counter = counter + 1;
	}
	return (counter);
}

/**
 * number_mod - receive the undefined parameter and then print it
 *
 * @parameters: undefined parameters
 * Return: the number of printed numbers and symbols
 */

int number_mod(va_list parameters)
{
	int value_d_i;
	int counter;

	value_d_i = va_arg(parameters, int);

	if (value_d_i == 0)
	{
		_putchar('0');
		return (1);
	}

	if (value_d_i == INT_MIN || value_d_i < 0)
	{
		_putchar('-');
		counter = print_number(value_d_i * -1);
		counter++;
		return (counter);
	}

	else
	{
		counter = print_number(value_d_i);
		return (counter);
	}
}

/**
 * binary_mod - function that converts an int to binary
 *
 * @parameters: undefined parameters
 * Return: the number of printed numbers
 */

int binary_mod(va_list parameters)
{
	int value_b;
	int  i, j;
	int arr[100];

	value_b = va_arg(parameters, int);

	if (value_b == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; value_b > 0; i++)
	{
		arr[i] = value_b % 2;
		value_b = value_b / 2;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + '0');

	return (i);
}
