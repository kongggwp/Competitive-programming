#include<stdio.h>
#include<string.h>
int count_factor(int a[])
{
    int c=0;
    for(int i=0 ; i<10 ; i++)
    {
        if(40%a[i]==0)c++;
    }
    return c;
}
int main()
{
    int a[10];
    for(int i=0 ; i<10 ; i++)
    {
        printf("Input %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Total factor = %d",count_factor(a));
}
