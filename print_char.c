#include "main.h"

/**
 * print_char - a function that prints every char entered
 * @arg:
 */

void print_char(va_list arg)
{
	write(1, arg, 1);/* affichage du caractere reçu */
}
