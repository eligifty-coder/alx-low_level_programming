/*
 * File: 2-print_alphabet_x10.c
 * Auth: Eligifty-coder (github)
 */
#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	
	while(count < 10)
	{
		char letter;
		for(letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		count++;
		
	}
}
