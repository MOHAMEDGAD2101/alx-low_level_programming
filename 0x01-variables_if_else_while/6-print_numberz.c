#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Print number of base 10 using putchar
 *
 * Return: always 0 (Success)
 */

int main(void)
{
		int x;

		for (x = 48; x < 58; x++)
		{
			putchar(x);
		}
		putchar('\n');

		return (0);
}
