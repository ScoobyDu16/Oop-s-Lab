#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {}
    a[i]='\0';
    printf("String Length : %d\n",i);
    return 0;
}
