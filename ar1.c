#include<stdio.h>
int main()
{
int num,oi,ri,rem=0,result,num1,rr;
scanf("%d %d",&num,&num1);
for(oi=num;oi<num1;oi++)
{
	rr=oi;
	result=0; 
	while(rr!=0)
	{
	rem=rr%10;
	result=(result)+(rem*rem*rem);
	rr/=10;
    }
    if(result==oi)
    printf("%d ",result);
}
}
