#include "main.h"
/**
 *Program: 1-isdigit.c
 *A function that checks for a digit (0 thorough 9)
 * _isdigit - checks for a digit (0 through 9)
 *
 *@c:The parameter to be evaluated with.
 * 
 *Return: 1 if c is a digit, 0 otherwise
 */

int  _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
