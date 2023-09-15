#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *  Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	Int s = 0, i = n;
va_list ap;
	If (!n)
		return (0);
	va_start(ap, n);
	while (i--)
	s += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
