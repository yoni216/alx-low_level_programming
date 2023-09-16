#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @i: Int representing a character
 * Return: Always 0.
 */

int _isdigit(int i)
{
if (i >= 48 && i <= 57)
return (1);
return (0);
}
