#include<stdio.h>
#include<string.h>
int main()
{
    char a[4][21];
    for(int i=0 ; i<4 ; i++)
    {
        printf("Enter text%d:",i+1);
        gets(a[i]);
    }
    for(int i=0 ; i<4 ; i++)
    {
        printf("%s: %d\n",a[i],strlen(a[i]));
    }
}
