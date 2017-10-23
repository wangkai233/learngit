#include <stdio.h>
#define ROW 4
#define COL 4
int main(void)
{
	int row,col;
	int temp,n;
	int i;
	
	
	int array[ROW][COL] = 
	{
		{16,15,14,13},
		{12,11,10,9},
		{8,7,6,5},
		{4,3,2,1},
	};
	
	for(n = 0; n < 16; ++n)
	{
		for(row = 0; row < ROW; row++)
		{
			for(col = COL; col < COL; col++)
			{
					if(col < 3)
					{
						if(array[row][col] > array[row][col + 1])
						{
							temp = array[row][col];
							array[row][col] = array[row][col + 1];
							array[row][col + 1] = temp;
						}
						printf("%d\n",array[row][col]);
					}
					else
					{
						col = 0;
						i = row;
						++row;
						if(array[row][col] < array[row - 1][col + 3])
						{
							temp = array[row][col];
							array[row][col] = array[row - 1][col + 3];
							array[row - 1][col + 3] = temp;
						}
						col = 4;
						row--;
						continue;
					}
					
			}
		}
	}
	
	
	printf("打印排序后的数组。\n");
	for(row = 0; row < ROW; row++)
	{
		for(col = 0; col < COL;col++)
		{
			printf("%d",array[row][col]);
		}
		printf("\n");
	}
	
	return 0;
}