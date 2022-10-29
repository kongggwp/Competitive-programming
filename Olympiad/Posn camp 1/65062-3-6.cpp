#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    int b;
    b=x;
    if(b>='a' && b<='z')
    {
        for(int i = b ; i>=97 ; i--)
        {
            printf("%c",i-32);
        }
    }
    else
    {
        for(int i = b ; i>=65 ; i--)
        {
            printf("%c",i);
        }
    }
}
