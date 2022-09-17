#include <stdio.h>
/**
 * main - prints all single digit numbers of base ten
 * Return: Always (0) sucess
 */
int main(void)
{
	char num;

	for (num = 0 ; num <= 9 ; num++)
		putchar ((num % 10) + '0');
	{
		putchar ('\n');
	}
	return (0);
}
