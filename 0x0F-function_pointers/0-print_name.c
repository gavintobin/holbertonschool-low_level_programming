#include "function_pointers.h"

/**
 *print_name - prints name
 * @name: pointer to name to be printed
 * @f: pointer to funtion
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}


