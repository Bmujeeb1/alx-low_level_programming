#include <stdio.h>
/**
 * main- prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = '0';
	char alphabet = 'a';

	while (number <= '9')/*print 0-9*/
	{
		putchar(number);
		number++;
	}
	while (alphabet <= 'f')/*print a to f*/
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
