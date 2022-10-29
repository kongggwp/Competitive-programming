#include<stdio.h>
#include<string.h>
int main()
{
    int va=0 , ve=0 , vi=0 , vo=0 , vu=0;
    char a[99],reverse[99] , upper ;
    printf("Input String1\t ==>");
    gets(a);
    int len = strlen(a);
    printf("Length of String ==>%d\n",len);
    printf("Reverse String\t ==>");
    for(int i=0 ; i<len ; i++)
    {
        if(a[i]=='a' || a[i]=='A')va++;
        if(a[i]=='e' || a[i]=='E')ve++;
        if(a[i]=='i' || a[i]=='I')vi++;
        if(a[i]=='o' || a[i]=='O')vo++;
        if(a[i]=='u' || a[i]=='U')vu++;
        printf("%c",a[len-i-1]);
    }
    printf("\nUpper String\t ==>");
    for(int i=0 ; i<len ; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        printf("%c",a[i]-32);
        else
        printf("%c",a[i]);
    }
    printf("\n=-=-=-=-=-=-=-=-=-=\nNumber of vowel\n=-=-=-=-=-=-=-=-=-=\n");
    printf("A or a = %d\nE or e = %d\nI or i = %d\nO or o = %d\nU or u = %d\n=-=-=-=-=-=-=-=-=-=",va,ve,vi,vo,vu);

}
