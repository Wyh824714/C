#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DiaplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//Iswin()告诉我们四种状态:
//玩家赢 -- '*'
//电脑赢 -- '#'
//平局   -- 'Q'
//继续   -- 'C'
char Iswin(char board[ROW][COL], int row, int col);