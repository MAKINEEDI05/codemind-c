#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b; //10+20=30
    b=a-b; //30-20=10
    a=a-b; //30-10=20
    printf("%d
%d",a,b);
}