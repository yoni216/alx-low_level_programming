#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int i;
	int coun = 0;

	for (i = 0; *s != '\0'; i++)
	{
		coun = coun + 1;
		s++;
	}
	return (coun);

}
