#include<stdio.h>
#include<string.h>
int main()
{
    char inp1[99]="" , inp2[99]="";
    printf("*********************************************\n");
    printf("Input String1 : ");
    gets(inp1);
    printf("Input String2 : ");
    gets(inp2);
    printf("*********************************************\n");
    int len1 = strlen(inp1) , len2 = strlen(inp2) , lenmax;
    if(len1>len2)lenmax = len1;
    else lenmax = len2;
    printf("Result of Even Position\t\t= ");
    for(int i=1 ; i<lenmax ; i+=2)
    {
        if(i<len1)printf("%c",inp1[i]);
        if(i<len2)printf("%c",inp2[i]);
    }
    printf("\nResult of Odd Position\t\t= ");
    for(int i=0 ; i<lenmax ; i+=2)
    {
        if(i<len1)printf("%c",inp1[i]);
        if(i<len2)printf("%c",inp2[i]);
    }
    printf("\nResult of String 1&2\t\t= ");
    for(int i=0 ; i<lenmax ; i++)
    {
        if(i<len1)printf("%c",inp1[i]);
        if(i<len2)printf("%c",inp2[i]);
    }
    printf("\nResult of Upper String 1&2\t= ");
    for(int i=0 ; i<len1 ; i++)
    {
        if(inp1[i]>='a' && inp1[i]<='z')
        printf("%c",inp1[i]-32);
        else
        printf("%c",inp1[i]);
    }
    printf(" ");
    for(int i=0 ; i<len2 ; i++)
    {
        if(inp2[i]>='a' && inp2[i]<='z')
        printf("%c",inp2[i]-32);
        else
        printf("%c",inp2[i]);
    }
    printf("\nResult of Lower String 1&2\t= ");
    for(int i=0 ; i<len1 ; i++)
    {
        if(inp1[i]>='A' && inp1[i]<='Z')
        printf("%c",inp1[i]+32);
        else
        printf("%c",inp1[i]);
    }
    printf(" ");
    for(int i=0 ; i<len2 ; i++)
    {
        if(inp2[i]>='A' && inp2[i]<='Z')
        printf("%c",inp2[i]+32);
        else
        printf("%c",inp2[i]);
    }
    printf("\nResult of Reverse String\t= ");
    for(int i=0 ; i<len1 ; i++)
    {
        if(inp1[i]>='A' && inp1[i]<='Z')
        printf("%c",inp1[i]+32);
        else
        printf("%c",inp1[i]-32);
    }
    printf(" ");
    for(int i=0 ; i<len2 ; i++)
    {
        if(inp2[i]>='A' && inp2[i]<='Z')
        printf("%c",inp2[i]+32);
        else
        printf("%c",inp2[i]-32);
    }
    printf("\n*********************************************");

}
