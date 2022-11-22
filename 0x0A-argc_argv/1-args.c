/**
 *A program that prints the number of arguments passed into it
 *Author: Faustina Honsiah <fhonsiah@gmail,com>
 */

#include <stdio.h>
#include "main.h"

/**
 *main - An entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: Always return success
 */

int main (int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return(0);
}
