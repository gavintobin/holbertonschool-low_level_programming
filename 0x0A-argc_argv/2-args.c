#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguements
 * @argc: srg counter
 * @argv: arg vrctor
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n ", argv[i]);
		i++;
	}
	return (0);
}
