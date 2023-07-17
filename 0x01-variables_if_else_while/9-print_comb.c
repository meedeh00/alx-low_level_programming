#include <stdio.h>
/**
 * main - print numbers seperatd by commas & space
 * Return: (0)
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers != 9)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
