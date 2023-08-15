#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 */
void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'a')
	{
		_putchar(al);
		al++;
	}
	_putchar('\a');
}
