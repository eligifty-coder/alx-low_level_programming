#include <stdio.h>
#define NAME_H

/**
 * prints the name of the file it was compiled from
 * Return: Always 0.
 */
int main(void)
{
	#ifdef NAME_H
		printf("%s\n", __FILE__);
	#endif
	return (0);
}
