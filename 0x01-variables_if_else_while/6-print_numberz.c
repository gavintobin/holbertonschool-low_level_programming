#include <stdio.h>
/**
 * main - prints all single digit numbers of base ten
 * Return: Always (0) sucess
 */
int main(void)
{
	char letter;

	for (letter = 0 ; letter <= 9 ; letter++)
		putchar ((letter % 10) + '0');
	{
		putchar ('\n');
	}
	return (0);
}
