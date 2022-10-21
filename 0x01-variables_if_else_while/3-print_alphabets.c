#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints the alphabet in lowercase, and then uppercase
 *
 *Return: o is returned
 */

int main(void)
{
int m;

/*@for prints alphabets*/

for (m = 'a'; m <= 'z'; m++)
{
putchar(m);
}
for (m = 'A'; m <= 'Z'; m++)
{
putchar(m);
}
putchar('\n');
return(0);
}
