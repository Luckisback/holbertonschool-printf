#include "main.h"

/**
 * print_char - a function that prints every char entered
 * Description: prints a char
 * @arg: Argument entered by a user
 * Return: length of char (1)
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);/* affichage du caractere reçu */
	return (1);
}
