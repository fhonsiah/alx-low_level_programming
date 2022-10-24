#include "main.h"
/**
 *_isalpha - Code entry
 *
 *Description: A function that checks for alphabetic character
 *
 *@c: The integer value it receives
 *
 * Return: 1 if c is a letter,lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
char isLowercase, isUppercase;
for (isLowercase = 'a';isLowercase <= 'z';isLowercase++)
{
	for (isUppercase = 'A';isUppercase <= 'Z';isUppercase++)
	{
		if ((isLowercase == c) || (isUppercase == c))
		{
			return (1);
		}
	}
}
return (0);
}
