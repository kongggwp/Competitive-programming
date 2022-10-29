#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,c=0;
    cin >> x >> n ;
    string s[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> s[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<x ; j++)
        {
            if(s[i][j]!=s[i+1][j])
            {
                c++;
            }
        }
        if(c>2)
        {
            cout << s[i];
            return 0;
        }
        c=0;
    }
}
