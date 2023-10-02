#include "main.h"


/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int a, b, i, j;
	int coun = 0;
	int coun2 = 0;

	for (a = 0; dest[a] != 0; a++)
	{
		coun = coun + 1;
	}

	for (b = 0; src[b] != 0; b++)
	{
		coun2 = coun2 + 1;
	}

	for (i = coun, j = 0; j < coun2; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
