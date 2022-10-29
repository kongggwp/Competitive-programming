#include <stdio.h>
char *check(int n)
{
    int sum=0;
    for(int i=1 ; i<=n/2 ; i++)
        if(n%i==0)sum+=i;
    if(sum==n)return "Yes";
    return "No";
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",check(n));
}
