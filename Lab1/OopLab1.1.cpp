#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%7==0)
		n=n+7;
	else if(n%7==1)
		n=n+6;
	else if(n%7==2)
		n=n+5;
	else if(n%7==3)
		n=n+4;
	else if(n%7==4)
		n=n+3;
	else if(n%7==5)
		n=n+2;
	else if(n%7==6)
		n=n+1;
	printf("%d",n);
	return 0;
}
