#ifdef AL_X_INCLUDED
#define AL_X_INCLUDED
#define our_printf
#ifndef our_printf
#include <stdio.h>
#include <stdarg.h>


typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);


#endif
