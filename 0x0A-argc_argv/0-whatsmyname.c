/**
 *A program that prints its name followed by a new line
 *Author: Faustina Honsiah <fhonsiah@gmail.com>
 */
#include <stdio.h>
#include "main.h"

/**
 *main - An entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: always return success
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
