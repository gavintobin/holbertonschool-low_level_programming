#include "main.h"
#include <stdio.h>

/**
 * main - prints programs name
 * @argv: vector
 * @argc: count
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argv > 0)
	printf("%s\n", argv[0]);
	return (0);
}
