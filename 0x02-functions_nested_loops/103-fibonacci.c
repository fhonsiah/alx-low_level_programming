#include <stdio.h>
/**
 *main - um even fibonacci numbers under 4 million.
 *Return nothing
 *
 */
int main(void)
{
	unsigned long count, i, j ,k,sums;

	i = sums = 0;
	j = i;
	for (count = 0;count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);I
}
