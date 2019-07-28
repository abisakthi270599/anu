#include <stdio.h>
 
int main(void) {
	int as,asd,minus;
	scanf("%d %d",&as,&asd);
	{
		if(as>asd)
		minus=as-asd;
		else
		minus=asd-as;
	}
	if(minus%2==0)
	printf("even");
	else
	printf("odd");
}
