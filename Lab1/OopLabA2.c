#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    scanf("%d",&k);
    printf("Smallest %d'th element is %d\n",k,a[n-1-k]);
    printf("Largest %d'th element is %d",k,a[k-1]);
    return 0;
}
