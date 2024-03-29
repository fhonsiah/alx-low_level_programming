/**
 *Program: 5-strstr.c
 *A function that locates a substring
 *Author: Faustina Honsiah
 */
#include "main.h"
/**
 *_strstr - function that locates a substring
 *@haystack: the pointer string.
 *@needle: the character occured.
 *Return: a substring.
 *
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
