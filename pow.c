#include<stdio.h>
int main()
{
long long int N,K,result=1;
scanf("%lld %lld",&N,&K);
while(K!=0)
{
	result*=N;
	--K;
}
printf("%lld",result);
}
