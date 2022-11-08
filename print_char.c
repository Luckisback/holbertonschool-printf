#include "main.h"

/**
 * print_char - a function that prints every char entered
 * @arg:
 */

void print_char(va_list arg)
{
	char c;
	c = va_arg(arg, int);
	write(1, c, 1);/* affichage du caractere reçu */
}
