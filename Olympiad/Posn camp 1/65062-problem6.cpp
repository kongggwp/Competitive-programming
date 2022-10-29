#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c , n;
    cin >> c >> n;
    if(c==1)
    {
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
                cout << " ";
            cout << "/\n";
        }
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<i ; j++)
                cout << " ";
            cout << "\\\n";
        }
    }
    if(c==2)
    {
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<i ; j++)
                cout << " ";
            cout << "\\\n";
        }
         for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
                cout << " ";
            cout << "/\n";
        }
    }
}
