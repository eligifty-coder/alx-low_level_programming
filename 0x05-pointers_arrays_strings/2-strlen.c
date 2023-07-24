/**
 * int _strlen - A function that returns the length of a string.
 * @s: pointer to the array of characters.
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;
	while(*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
