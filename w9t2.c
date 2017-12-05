#include<stdio.h>
#include<string.h>

int compare (const void*,const void*);
void mysort(void *,int,int,int(*compare)(const void*,const void*));

int compare (const void*a,const void*b)
{
	if( (*(int *)a - *(int *)b) > 0){return 1;}
}
void mysort(void *a,int n,int length,int(*compare)(const void*,const void*))
{
	int i,j,cmp;
	char *p = (char *)a;
	char *temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(compare((void*)(p+j*length),(void*)(p+(j+1)*length))==1){
				temp = (char *)malloc(length);
				memcpy(temp,p+j*length,length);
				memcpy(p+j*length,p+(j+1)*length,length);
				memcpy(p+(j+1)*length,temp,length);
				free(temp);
			}
		}
	}
}

void main()
{
	int a[100];
	int i,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mysort(a,n,sizeof(a[0]),compare);

	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

}