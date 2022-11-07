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
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for(i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)I
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
