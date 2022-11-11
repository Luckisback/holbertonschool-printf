#ifndef __PRINTF__
#define __PRINTF__
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

/**
 * struct print - the structure of printf function
 * Description: associat each data type to the function
 * @data: the type of data
 * @f: the funtion pointer to the printing functions used
 **/
typedef struct print
{
	char *data;
	int (*f)(va_list arg);
} print_t;

int _printf(const char *format, ...);
int print_string(va_list arg);
int print_char(va_list arg);
int print_percent(va_list arg);
int _putchar(char c);
int _printflong(const char *format, print_t prt[], va_list arg);
int print_int(va_list arg);

#endif
