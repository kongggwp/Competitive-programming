#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    int a,b,c,d;
    a=money/1000;
    b=(money - a*1000)/500;
    c=(money - a*1000 - b*500)/100;
    d=(money - a*1000 - b*500 - c*100)/50;
    printf("B1000 = %d\n",a);
    printf("B500 = %d\n",b);
    printf("B100 = %d\n",c);
    printf("B50 = %d\n",d);
}
