#include<stdio.h>
int main()
{
	int arr[100],max,size,c,loc=1;
	scanf("%d",&size);
	for(c=0;c<size;c++)
	scanf("%d",&arr[c]);
	max=arr[0];
	for(c=1;c<size;c++)
	{
		if(arr[c]>max)
		{
			max=arr[c];
			loc=c+1;
		}
	}
printf("%d",max);
}
