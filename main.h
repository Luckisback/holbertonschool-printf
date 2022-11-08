#ifndef __PRINTF__
#define __PRINTF__
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct print {
	char *data;
	void (*f)(va_list arg);
} print_t;

int _printf(const char *format, ...);
void print_string(va_list arg);
void print_char(va_list arg);

#endif
