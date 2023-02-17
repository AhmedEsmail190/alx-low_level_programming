#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0.
 */

int main(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++){
		putchar(i);
	}
	printf("\n");
	return (0);
}
