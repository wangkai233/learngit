#include <stdio.h>
#include <string.h>

#define SIZE 81

int main()
{
	int i,k,m,n;
	char string[SIZE];
	int num[SIZE];

	//�����ַ���
	gets(string);
	puts(string);
	/*�����ַ��������Խ���ѭ��*/
	m = strlen(string);
	printf("%d\n",m);
	//��ȡ���֣�ת��Ϊ������������
	for (i = 0; i < m; i++)
	{		
		k = 0;
		if(string[i] && (string[i] >= '0' && string[i] <= '9'))
		{
			k++;
		}

		while(string[i] >= '0' && string[i] <= '9')
		{
			num[1]=0;
			num[k] = num[k] * 10 + string[i];
			i++;
		}

	}

	//����ַ����е���
	for(n = 1; n < k + 1; n++)
		printf("%d  \n",num[n]);


}