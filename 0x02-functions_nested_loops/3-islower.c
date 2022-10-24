#include "main.h"
/**
 *_islower - Code entry point
 *
 *Description: This program checks for lowercase character.
 * 
 *@c: The interger value it receives
 *Return: 1 if c is lowercase, 0 otherwise.
 */
int  _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
