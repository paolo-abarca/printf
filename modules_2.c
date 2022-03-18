#include "main.h"

/**
 * rot_mod - Print a string in rot13
 *
 * @parameters: undefined parameters
 * Return: the number of printed numbers
 */

int rot_mod(va_list parameters)
{
	char *value_R;
	char *p = NULL;
	int i, j;
	char n[] = "(null)";

	value_R = va_arg(parameters, char *);

	if (value_R == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}

	for (i = 0; value_R[i]; i++)
	{}

	p = malloc(sizeof(char) * i);

	if (p == NULL)
	{
		_printf("malloc error");
		exit(100);
	}

	for (i = 0; value_R[i]; i++)
		p[i] = value_R[i];

	p = rot13(p);

	for (j = 0; p[j]; j++)
	{
		_putchar(p[j]);
	}
	free(p);

	return (j - 1);
}

/**
 * rot13 - funcion that encodes a string using rot13
 *
 * @str: string to be convert
 *
 * Return: pointer direction
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
				break;
			}
			str[i] = str[i] - 13;
			break;
		}
	}
	return (str);
}
