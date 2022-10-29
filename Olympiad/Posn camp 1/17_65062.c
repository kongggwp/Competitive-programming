#include<stdio.h>
#include<string.h>
int main()
{
    int j=0;
    char a[14];
    gets(a);
    for(int i=0 ; i<17 ; i++)
    {
        if(i==1 || i==6 || i==12 || i==15)
            printf("-");
        else
        {
            printf("%c",a[j]);
            j++;
        }

    }
}
