#include <stdio.h>
int dice()
{
    int x=rand()%6+1;
    return x;
}
int main()
{
    int x1,x2,x3;
        srand(time(0));
        x1=dice();
        printf("dice : %d\n",x1);
        x2=dice();
        printf("dice : %d\n",x2);
        x3=dice();
        printf("dice : %d\n",x3);
        int sum=x1+x2+x3;
        printf("three : %d\n",sum);
        if(sum>=4 && sum<=10)printf("low\n");
        if(sum>=11 && sum<=17)printf("High\n");
        if(x1==x2 && x2==x3)printf("three of a kind");
}
