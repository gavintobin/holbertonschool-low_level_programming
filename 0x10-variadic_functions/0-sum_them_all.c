#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - adds sums given
 * @n: number of sums to add
 * @...: unknown arguements
 * Return: sum , sezo
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);

	return (sum);
}

