#include <stdio.h>
#define ROW 4
#define COL 4
int main(void)
{
	int row,col,temp;
	int array [ROW][COL];
	
	printf("初始化二维数组.\n");
	for(row = 0; row < ROW; row++)
	{
		for(col = 0; col <COL; col++)
		{
			scanf("%d",&array[row][col]);	
		}	
		
	}

	printf("打印数组。\n");
	for(row = 0; row < ROW; row++)
	{
		for(col = 0; col < COL;col++)
		{
			printf("%d  ",array[row][col]);
		}
		printf("\n");
	}

	printf("进行数组转置.\n");
	for(row = 0; row < ROW; row++);
	{
		for(col = row; col < COL; col++);
		{
			temp = array[row][col];
			array[row][col] = array[col][row];
			array[col][row] = temp;
			
		}
	}
	
	printf("打印转置数组。\n");
	for(row = 0; row < ROW; row++)
	{
		for(col = 0; col < COL;col++)
		{
			printf("%d   ",array[col][row]);
		}
		printf("\n");
	}

	return 0;
}