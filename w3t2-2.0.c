#include <stdio.h>
#include <string.h>

#define SIZE 81

int main(void)
{
	int i,k,m,n,j;
	char string[SIZE];
	long int num[SIZE];
	

	//读入字符串
	gets(string);
	puts(string);
	/*计算字符个数，以结束循环*/
	m = strlen(string);
	printf("%d\n",m);
	//给数组置零
	for(j = 0; j < SIZE;j++)
	{
		num[j] = 0;
	}
	//提取数字，转化为数，存入数组
	for (i = 0,k = 0; i < m; i++)
	{
		if(string[i] && (string[i] >= '0' && string[i] <= '9'))
		{
			k++;
		}

		if(string[i] && (string[i] < '0' && string[i] > '9'))
		{
			string[i] = '\0';
		}

		while(string[i] >= '0' && string[i] <= '9')
		{
			num[k] = num[k] * 10 + (string[i] - '0');
			i++;
		}

	}

	//输出字符串中的数
	for(n = 1; n < k + 1; n++)
		printf("%d  \n",num[n]);


}
