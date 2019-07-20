#include<stdio.h>
int main()
{
	int arr[100],min,size,c,loc=1;
	scanf("%d",&size);
	for(c=0;c<size;c++)
	scanf("%d",&arr[c]);
	min=arr[0];
	for(c=1;c<size;c++)
	{
		if(arr[c]<min)
		{
			min=arr[c];
			loc=c+1;
		}
	}
printf("%d",min);
}
