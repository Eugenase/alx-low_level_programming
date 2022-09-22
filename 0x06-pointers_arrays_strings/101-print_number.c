#include "main.h"
/**
 * print_number - prints an interger
 * @n: integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = 0
		if (n < 0)
		{
		_putchar('_');
		num = -num;
		}
	if ((num / 10) > 0)
		print_number (num / 10 );
}
