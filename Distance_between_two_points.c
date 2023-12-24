//distance b/w two points
#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float a,b,c,x;
    a=(x2-x1);
    b=(y2-y1);
    c=(a*a)+(b*b);
    x=sqrt(c);
    printf("%.4f",x);
}