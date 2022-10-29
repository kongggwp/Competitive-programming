#include<stdio.h>

int main()
{
    char s[99];
    scanf("%s",s);
    int len=0;
    for(int i=0 ; s[i]!='\0' ; i++)
    {
        len++;
    }

    for(int i=0 ; i<len ; i++)
    {
        if(s[i]!=s[i+1])
        {
            printf("%c",s[i]);
        }
    }
}
