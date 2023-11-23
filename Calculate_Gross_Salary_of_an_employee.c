#include <stdio.h>
int main()
{
    float sal,hra,da,pf,gs;
    scanf("%f%f%f",&sal,&hra,&da);
    pf=sal*(12/100.0);
    gs=sal+hra+da+pf;
    printf("%.2f",pf);
    printf("
%.2f",gs);
}