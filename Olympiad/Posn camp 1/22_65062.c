#include<stdio.h>
#include<string.h>
int main()
{
    char a[999];
    scanf("%s",a);
    int len = strlen(a);
    for(int i=0 ; i<len/2 ; i++)
    {
        if(a[i]!=a[len-i-1])
        {
            printf("%s is not a palindrome.",a);
            return 0;
        }
    }
    printf("%s is a palindrome.",a);

}
