#include "holberton.h"
/**
 *print_chessboard - prints a chessboard
 *@a:2d array
 *
 *Return:void
 */

void print_chessboard(char (*a)[8])
{
int i, j;
while (*a)
{
for (i = 0; i < 8;  i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
}
}
}

