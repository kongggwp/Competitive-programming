#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a,b,c;
    cin >> n;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout << j << " " ;
            sum+=j;
        }
        cout << endl;
    }
     if(n<4)
    {
        cout << "No Answer";
        return 0;
    }
    a=n*(n+1)/2;
    b=n*(n-1)/2;
    c=n-2;
    cout << sum-a-b-c;
}
