#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],*p;
    p=a;
    gets(a);
    int f;
    f=strleng(p);
    printf("String Length : %d",f);
    return 0;
}

int strleng(char *q)
{
    int i;
    for(i=0;*(q+i)!='\0';i++)
    {

    }
    return i;
}
