#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare (const void * ,const void * );

int compare(const void * a,const void * b)
{
	return(*(char *)a - *(char *) b);
}

int main()
{
	char s[100];
	int n;

	scanf("%s",s);
	n=strlen(s);
	qsort(s,n,sizeof(s[0]),compare);
	
	printf("%s",s);
	return 0;
}