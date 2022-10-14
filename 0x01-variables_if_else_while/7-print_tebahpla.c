#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns an alphabet in reverse order
 * Return: return 0 if successful
 */
int main(void)
{
	int wrd = 'z';

	while (wrd >= 'a')
	{
		putchar(wrd);
		wrd--;
	}
	putchar('\n');
	return (0);
}
