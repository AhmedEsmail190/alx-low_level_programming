#include "main.h"

/**
 * main - Calling a function and Prints alphabet
 * Return: Always 0.
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
