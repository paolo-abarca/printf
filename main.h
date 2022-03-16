#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct mod - structure of printf modules
 *
 * @mod: pointer to modules
 * @p: module functions
 */

typedef struct mod
{
	char  *mod;
	int (*p)();
} mod_t;

int _putchar(char c);
int _printf(const char *format, ...);
int char_mod(va_list parameters);
int string_mod(va_list parameters);
int number_mod(va_list parameters);
int print_number(unsigned int n);

#endif
