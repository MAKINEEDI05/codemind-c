#include <stdio.h>
int main()
{
    int a,b,c;
    float d;
    scanf("%d%d%d",&a,&b,&c);
    d=0.5*c*(a+b);
    printf("%.4f",d);
}