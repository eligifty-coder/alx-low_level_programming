#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: void
 */
void more_numbers(void)
{

	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		a = 0 ;
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;

		}
	_putchar('\n');
	b++;
	}
}
