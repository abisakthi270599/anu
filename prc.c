#include<stdio.h>
int main()
{
int n,m,i,count=0,j;
scanf("%d %d",&n,&m);
for(i=n+1;i<m;i++)
{
	for(j=1;j<m;j++)
	{
	if(i%j==0)
	count++;
	}
	if(count==2)
		printf("%d ",i);
		count=0;
}
}
