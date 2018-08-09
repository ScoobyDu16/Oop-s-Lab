#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,*p;
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    lab2_3(p,n);
    return 0;
}

void lab2_3(int *q,int m)
{
    int i,max,min;
    max=*q;
    min=*q;
    for(i=1;i<m;i++)
    {
        if(*(q+i)>max)
            max=*(q+i);
        if(*(q+i)<min)
            min=*(q+i);
    }
    printf("Max : %d Min : %d",max,min);
}
