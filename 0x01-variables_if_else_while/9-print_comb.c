#include <stdio.h>
/**
 * main - print numbers seperatd by commas & space
 * Return: (0)
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '8')
	{
		putchar(numbers);
		if (numbers != 8)
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
