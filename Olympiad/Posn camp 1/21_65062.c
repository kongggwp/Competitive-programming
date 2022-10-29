#include<stdio.h>
#include<string.h>
int main()
{
    int n[16],j=0 , sum=0;
    char a[20];
    printf("Input : ");
    scanf("%s",a);
    for(int i=0 ; i<19 ; i++)
    {
        if(i!=4 && i!=9 && i!=14)
        {
            n[j] = a[i]-'0';
            j++;
        }
    }
    for(int i=0 ; i<=14 ; i+=2)
    {
        n[i]*=2;
        if(n[i]>9)
        {
            n[i]-=9;
        }
    }
    for(int i=0 ; i<=15 ; i++)
        sum+=n[i];
    if(sum%10==0)
    {
        printf("Valid card");
    }
    else
    {
        printf("Invalid card");
    }
}
