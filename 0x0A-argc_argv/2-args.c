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
	int i;

	for ( i = 0 ; i < argc ; i++)
	{
		printf("%s\n ", argv[i]);
	}
	printf("\n");
	return(0);
}
