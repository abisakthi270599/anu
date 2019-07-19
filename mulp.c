#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	if(n==0)
	printf("0 0 0 0 0");
	for(i=1;i<=n*5;i++)
		{
			if(i%n==0)
			printf("%d ",i);
		}
}
