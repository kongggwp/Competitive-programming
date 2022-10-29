#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] , c=0 , b[99] , x=0 ;
    for(int i=0 ; i<10 ; i++)
    {
        cin >> a[i];
    }
    for(int i=1 ; i<=40 ; i++)
    {
        if(40%i==0)
        {
            b[x] = i;
            x++;
        }
    }
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<x ; j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    cout << "Total = " << c;
}
