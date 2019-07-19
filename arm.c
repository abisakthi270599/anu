#include<stdio.h>
int main()
{
int num,oi,ri,rem=0,result;
scanf("%d",&num);
oi=num;
while(oi!=0)
{
	rem=oi%10;
	result+=rem*rem*rem;
	oi/=10;
}
if(result==num)
printf("yes");
else
printf("no");
}
