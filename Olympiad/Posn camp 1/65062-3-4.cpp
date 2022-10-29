#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,c =0 ,k=0;
    cin >> x;
    int a[x+1]={};
    for(int i=1 ; i<=x ; i++)
    {
        for(int j=1 ; j<=i; j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k++;
            a[i]=1;
        }
        c=0;
    }
    cout << "Total prime = " << k << endl ;
    for(int i=0 ; i <= x ; i++)
    {
        if(a[i]==1)
        {
            cout << i << " ";
        }
    }
}

