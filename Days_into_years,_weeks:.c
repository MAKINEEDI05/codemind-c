#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/365;
    c=a%365;
    d=c/7;
    printf("%d
%d",b,d);
}