/**
 *A progam that prints the number of arguments passed into it
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"
/**
 *main - An entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: Always return success
 */
int main (int argc, char *argv[ ])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
