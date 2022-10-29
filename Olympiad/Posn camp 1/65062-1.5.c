#include<stdio.h>
int main()
{
    printf("Input : ");
    int x;
    scanf("%d",&x);
    int y=x+543;
    int a,b,c,d;
    a = x/1000;
    b =(x%1000)/100;
    c =(x%100)/10;
    d = x%10;
    printf("%d\n",a+b+c+d);
    a = y/1000;
    b =(y%1000)/100;
    c =(y%100)/10;
    d = y%10;
    printf("%d\n",a+b+c+d);
}

