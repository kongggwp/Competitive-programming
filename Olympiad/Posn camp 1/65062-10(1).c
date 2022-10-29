#include <stdio.h>
long long fac(int n)
{
    long long mul=1;
    for(int i=2 ; i<=n ; i++)
    {
        mul*=i;
    }
    return mul;
}

int main()
{
    int n;
    long long sum=0;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
        sum +=fac(i);
    printf("%lld",sum);
}
