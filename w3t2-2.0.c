#include <stdio.h>
#include <string.h>

#define SIZE 81

int main(void)
{
	int i,k,m,n,j;
	char string[SIZE];
	long int num[SIZE];
	

	//�����ַ���
	gets(string);
	puts(string);
	/*�����ַ��������Խ���ѭ��*/
	m = strlen(string);
	printf("%d\n",m);
	//����������
	for(j = 0; j < SIZE;j++)
	{
		num[j] = 0;
	}
	//��ȡ���֣�ת��Ϊ������������
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

	//����ַ����е���
	for(n = 1; n < k + 1; n++)
		printf("%d  \n",num[n]);


}
