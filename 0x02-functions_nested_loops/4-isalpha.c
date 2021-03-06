/*
 *Program: 4-isalpha
 *The program prints alphabetic character,
 *returns 1 if c is a letter, lowercase,
 *or uppercase.
 *Author:Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *_isalpha - checks for lowercase characters.
 *
 *@c: The parameter to be evaluated with.
 *
 *Return: 1 if c is a letter, lowercase, or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
