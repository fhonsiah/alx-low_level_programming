#include "main.h"
/**
 *_isupper - function taht checks for uppercase character.
 *@c: variable type int
 *Retrun: 1 for uppercase and 0 otherwise
 *
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
