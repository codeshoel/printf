#include main.h
#include <stdio.h>
/***
* Description: function to produce output according to a format
* Returns: the number of characters printed;
*/


int _printf(const char *format, ...)
{
	char ptr = &format;

	printf("%c", ptr);
	printf("%s", ptr);

	return (0);

}

