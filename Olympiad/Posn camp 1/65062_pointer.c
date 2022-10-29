#include <stdio.h>
int main(){
    int *p , a[10] , sum=0;
    p=a;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",p);
        sum +=*p;
        p++;
    }
    printf("Sum = %d",sum);
}
