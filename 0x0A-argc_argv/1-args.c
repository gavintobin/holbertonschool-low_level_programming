#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguements
 * @argv: arg vec
 * @argc: arg count
 * Return:(0)
 */


int main(int argc, __attribute__((unused)) char *argv)
{
	int n;

	for (n = 0 ; n < argc ; n++)
	{
	}
	printf("%d\n ", n - 1);
	return (0);
}
