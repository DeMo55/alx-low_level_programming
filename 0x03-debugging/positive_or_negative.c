#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - determine if a number is positive, negative or zero.
 *
 * Description: Check if positive or negative
 *
 * @i: describe input
 *
 */

void positive_or_negative(int i)
{
	/* i is the received number to check*/
	int n = i;

	if (n > 0)
{
	printf(“%d is positive\n”, n);
}
else if (i == 0)
{
	printf(“%d is zero\n”, n);
}
else
{
	printf(“%d is negative\n”, n);
}

}
