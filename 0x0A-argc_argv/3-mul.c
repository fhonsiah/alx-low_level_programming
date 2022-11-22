/**
 *A program that multiplies two numbers.
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - An entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: Always return success
 */
int main(int argc, char *argv[])
{
	int result;

	if(argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}

	printf("Error\n");
	return (1);
}
