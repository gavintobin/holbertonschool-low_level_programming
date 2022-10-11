#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *@argc: counter
 *@argv: vector
 * Return: 1 , 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *=  atoi(argv[i]);
		}
		printf("%d\n", res);
	}	return (0);
}
