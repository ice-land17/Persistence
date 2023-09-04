#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������

void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����

void PlayMove(char board[ROW][COL], int row, int col);//�������

void ComputerMove(char board[ROW][COL], int row, int col);//��������

//�ж���Ӯ
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ��  - 'Q'
//����  - 'C'
char IsWin(char board[ROW][COL], int row, int col);