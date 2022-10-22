#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - prints all possible different combinations of two digits
 *
 *Return: 0 is returned
 *
 */

int main(void)
{
	int m, n;
	/*@for loops through 0 to 9*/
	for (m = '0'; m < '9';m++)
	{
		/*@if checks n to m*/
		if (n != m)
		{
			putchar(m);
			putchar(n);
			/*@if checks m to 8 and n to 9*/
			if (m == '8' && n == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);

}
