#include <stdio.h>
#include <stdarg.h>

int sum (int n,...);
int n;

int sum (int n,...)
{
	int i,num = 0;
	va_list vap;
	va_start (vap, n);
	for (i=0; i<n; i++)
		num+=va_arg(vap,int);
	va_end(vap);
	return num;
}

void main()
{
	int s;
	s=sum(2,16,20);
	printf("the summary of the numbers is %d",s);
}
