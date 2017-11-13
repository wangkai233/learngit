#include <stdio.h>
#define MAX 10

struct student {
	int id;
	double grades;
};

int struct_sort(struct student them[]);

void main()
{
	struct student they[MAX];
	int i;
	printf("输入学号：\n");
	for (i=0; i<MAX; ++i)
		scanf("%d",&they[i].id);
	printf("输入分数：\n");
	for (i=0; i<MAX;++i)
		scanf("%d",&they[i].grades);
	printf("开始排序\n");
	struct_sort(they);
	
	i=0;
	while (i<MAX)
	{
		printf("%d\n",they[i].id);
		i++;
	}
}

int struct_sort (struct student them[])
{
	int i,j,temp;
	for(i=0;i<MAX-1;i++)
	{
		for(j=0; j<MAX-1-i;j++)
		{
			if (them[j].id > them[j+1].id)
				{
					temp = them[j].id;
					them[j].id = them[j+1].id;
					them[j+1].id = temp;
				}
		}
	}
	return 0;
}