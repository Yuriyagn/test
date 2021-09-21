# C语言写扫雷

## game.c

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows;i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");

	for (i = 1; i <= row;i++)
	{
		printf("%d ",i );
	
		for (j = 1; j <= col;j++)
		{

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}

int get_mine(char mine[ROWS][COLS], int x, int y,int a,int b)
{
	int s = 0;
	for (x--; x <= a; x++)
	{
		y = b - 1;
		for (y--; y <= b; y++)
		{
			s = mine[x][y]+s;
			
		}
	}
	return s-9*'0';
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - EASY_COUNT)
	{
		printf("请输入你的坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				int a = x + 1;
				int b = y + 1;
				int ret = get_mine(mine, x, y,a,b);
				show[x][y] = ret + '0';
				DisplayBoard(show, ROW, COL);
				win++;

			}
			else
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！！！！\n");
		DisplayBoard(mine, ROW, COL);
	}
}

```

## game.h

```c 
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include <stdlib.h>
#include <time.h>
#define EASY_COUNT 79

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set );
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
```

## test.c

~~~c
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void meanu()
{
	printf("********************************\n");
	printf("********   1.   play   *********\n");
	printf("********   0.   exit   *********\n");
	printf("********************************\n");

}


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'#');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);

}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

```c
	meanu();
	printf("请选择:>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误，请重新选择\n");
		break;
	}
} while (input);

}



int main()

{
	test();


	return 0;

}


~~~

