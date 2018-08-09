#include<stdio.h>
int main()
{
	int i,j,a[4],n,m;
	for(i=32;i<100;i++)
    {
        n=i*i;
        m=n;
        for(j=3;j>=0;j--)
        {
            a[j]=n%10;
            n=n/10;
        }
        if(a[0]==a[1] && a[2]==a[3] && a[0]!=a[2])
            printf("%d is a Complete Square of %d",m,i);
    }
    return 0;
}
