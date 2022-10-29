#include<stdio.h>
#include<string.h>
float average(float a[])
{
    float sum=0;
    for(int i=0 ; i<10 ; i++)
    {
        sum+=a[i];
    }
    return sum/10;
}

int main()
{
    float a[10];
    for(int i=0 ; i<10 ; i++)
    {
        printf("Input %d : ",i+1);
        scanf("%f",&a[i]);
    }
    printf("%f",average(a));
}
