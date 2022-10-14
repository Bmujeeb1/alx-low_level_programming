#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 seperated by a comma followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
