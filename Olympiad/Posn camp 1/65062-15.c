#include <stdio.h>
char dice()
{
    srand(time(0));
    int x=rand()%6+1 , n ;
    printf("dice : %d\n",x);
    if(x>3)printf("High");
    else printf("Low");
}
int main()
{
    dice();
}
