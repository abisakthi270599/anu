#include<stdio.h>
int main()
{
	int n,ri=0,rem,oi;
	scanf("%d",&n);
	oi=n;
	while(n!=0)
	{
		rem=n%10;
		ri=ri*10+rem;
		n/=10;
	}
	if(oi==ri)
	printf("yes");
	else
	printf("no");
}
