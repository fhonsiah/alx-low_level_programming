#include "main.h"
/**
 *_islower - Code entry point
 *
 *Description: This program checks for lowercase character.
 * 
 *@c: The interger value it receives
 *Return: 0
 */
int  _islower(int c)
{
	int i = 'a';
	for(i = 'a';i <= 'z';i++)
	{
		/*refer in C*/
		if (c == 1)
		{
			return (1);
		}
	}
	return (0);
}
