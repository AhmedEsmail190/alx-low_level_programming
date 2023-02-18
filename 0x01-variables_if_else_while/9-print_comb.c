#include <stdio.h>

/**
 * main - Prints the alphabet
 * Return: Always (Success).
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
