/*
 *Program: 1-last_digit.c
 *The program prints the last digit of the number stored in the variable n.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**main - Entry point of the program.
 *Retrun: 0 if the program runs without errors.
 */

int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("Last digit of %d is ", n);
if (lastDigit > 5)
	printf("%d and is greater than 5\n", lastDigit);
else if (lastDigit == 0)
	printf("%d and is 0\n", 0);
else if (lastDigit < 6 && lastDigit != 0)
	printf("%d and is less than 6 and not 0\n", lastDigit);
return (0);
}
