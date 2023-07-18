#include "main.h"
/**
 * main = Entry point
 * Description: 'prints _putchar to stdout'
 * return : always 0
 * */
int main(void)
{
	char c[] = "_putchar";
	int i;
	for(i=0; i<9;i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return 0;
	
}
