#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include < stdio.h >
/* betty style doc for function main goes there */
/**
 * main checks if the random numer is negative or positive or zero then
 * prints the result of the checking
 * prints "is negative of positive or zeros and the number"
 * Retunr : Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
