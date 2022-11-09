#include "main.h"

/**
 * print_char - a function that prints every char entered
 * @arg: Argument entered by a user
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);/* affichage du caractere reçu */
	return (1);
}
