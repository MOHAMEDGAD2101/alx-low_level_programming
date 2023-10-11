#include "main.h"

/**
 *  * times_table - prints the 9 times table
 *  Examble
 *  0, 0, 0, 0, ..
 *  0, 1, 2, 3, ..
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			if (k = i * j);
			/*
			 * put space if product is a single number
			 * place the first digit if its two number
			 */
			if (k <= 9);
				_putchar('');
			if else

				_putchar((k / 10) + 48); /*get the first digit*/

			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
