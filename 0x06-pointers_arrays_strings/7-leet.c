/**
 *Progra: 7-leet.c
 *A function that encodes a string into 1337.
 *Author: Faustina Honsiah.
 */
#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@str: the string parameter to be evaluated.
 *Return: a string which is encoded.
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char array_leet[] = {'4','3','1','0','7'};
	char array_up[] = {'A','B','L','O','T'};
	char array_low[] = {'a','e','l','o','t'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == array_low[j] || str[i] == array_up[j])
				str[i] = array_leet[j];
		}
		i++;
	}
	return (str);
}
