#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguements
 * @argv: arg vec
 * @argc: arg count
 * Return:(0)
 */


int main(int argc, __attribute__((unused)) char *argv[])
{
	--argc;
	printf("%d\n", argc);
	return (0);
}
