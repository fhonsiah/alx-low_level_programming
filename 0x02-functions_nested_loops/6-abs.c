#include "main.h"
/**
 *_abs -Code entry point
 *
 *@number:number is a positive or negaatax
 *
 *@number:number is a positive or negative integer
 *
 *Return: int
 */

int _abs(int number)
{
	int result;
	if (number < 0)
	{
		result = number * -1;
		return (result);
	}
	else
	{
		result = number;
		return (result);
	}
}
