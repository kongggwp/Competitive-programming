#include <stdio.h>
long long fib (int n)
{
    int s1=0 , s2=1 , s3 = s1+s2;
    if(n==0)return 0;
    for(int i=3 ; i<=n ; i++)
    {
        s1=s2;
        s2=s3;
        s3=s1+s2;
    }
    return s3;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
        printf("%lld ",fib(i));
}
