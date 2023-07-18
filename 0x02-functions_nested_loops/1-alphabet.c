#include "main.h"

/**
 * File: 1-alphabet.c
 * main - Prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 on success.
 */

void print_alphabet(void)
{
	int alphabet;
	for( alphabet = 'a'; alphabet <= 'z'; alphabet++ )
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

