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
    scanf("%d",&n);
    printf("%lld",fac(n));
}
