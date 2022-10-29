#include <stdio.h>
char* isprime(int n)
{
    if(n<2)return "No";
    for(int i=2 ; i<n ; i++)
    {
        if(n%i==0)return "No";
    }
    return "Yes";
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",isprime(n));
}
