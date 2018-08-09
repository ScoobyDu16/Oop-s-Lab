#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    char* list[n];
    for(i=0;i<n;i++)
    {
        list[i]=(char*)malloc(n);
    }
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        gets(list[i]);
    }
    for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
    scanf("%d",&k);
    list[k]=list[n-1];
    list[n-1]=NULL;
    fflush(stdin);
    gets(list[n-1]);
    for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
    return 0;
}
