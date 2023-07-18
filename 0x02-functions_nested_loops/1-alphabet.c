#include "main.h"
/**
 * File: 1-alphabet.c
 * main - Prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
