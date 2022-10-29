#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int n , mid ;
    cin >> n ;
    mid = (n+1)/2;
    if(n%2==0)
    {
        for(int i=1; i<=n/2 ; i++)
        {
            for(int j=1; j<n ; j++)
            {
                if(mid-i+1==j || mid+i-1==j)
                {
                    cout << "*";
                }
                else cout << "-";
            }
            cout << endl;
        }
        for(int i=n/2; i>=1; i--)
        {
            for(int j=1; j<n ; j++)
            {
                if(mid-i+1==j || mid+i-1==j)
                {
                    cout << "*";
                }
                else cout << "-";
            }
            cout << endl;
        }
    }
    else{
        for(int i=1; i<=(n/2)+1 ; i++)
        {
            for(int j=1; j<=n ; j++)
            {
                if(mid-i+1==j || mid+i-1==j)
                {
                    cout << "*";
                }
                else cout << "-";
            }
            cout << endl;
        }
        for(int i=(n/2); i>=1; i--)
        {
            for(int j=1; j<=n ; j++)
            {
                if(mid-i+1==j || mid+i-1==j)
                {
                    cout << "*";
                }
                else cout << "-";
            }
            cout << endl;
        }
    }
}
