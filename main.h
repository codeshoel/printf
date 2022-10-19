#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.h>
<<<<<<< HEAD
=======

>>>>>>> 88731dca3fe988170dfe057111487ca73c1e0ca9
/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 *
 */
<<<<<<< HEAD
=======


>>>>>>> 88731dca3fe988170dfe057111487ca73c1e0ca9
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
#endif
