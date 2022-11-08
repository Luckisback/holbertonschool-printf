#ifndef __PRINTF__
#define __PRINTF__
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - the structure of printf function
 * Description: associat each data type to the function
 * @data: the type of data
 * @f: the funtion pointer to the printing functions used
 **/
typedef struct print
{
	char *data;
	void (*f)(va_list arg);
} print_t;

int _printf(const char *format, ...);
void print_string(va_list arg, char *str);
void print_char(va_list arg);
void print_percent(va_list arg);

#endif
