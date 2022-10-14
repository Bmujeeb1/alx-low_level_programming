#include <stdio.h>
/**
 * main - print all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digits*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repeatition*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
