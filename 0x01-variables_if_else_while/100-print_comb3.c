#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 ( Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 56; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
