#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int a[5][4] , b[5]={} , c[5] ;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cin >> a[i][j];
            b[i] = a[i][j] + b[i];
            c[i] = b[i];
        }
    }
    sort(b,b+5);
    for(int i =0 ; i<5 ; i++)
    {
        if(c[i]==b[4])cout << i+1 << " " ;
    }
    cout << b[4] ;
    
}
