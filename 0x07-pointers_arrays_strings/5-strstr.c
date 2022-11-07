/**
 *Program: 7-print_chessboard.c
 *A function that prints the chessboard
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *print_chessboard -  function that prints the chessboard
 *@a: the pointer for the two dimensianol array
 */
char *strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}

b++;
}

if (needle[b] == '\0')
{
return (haystack + a);
}

a++;
}

return ('\0');
}
