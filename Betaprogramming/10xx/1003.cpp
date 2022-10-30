#include <bits/stdc++.h>
using namespace std;
int i , n ;
int dp[101];
int nugget(int i)
{
    if(i>100)return -1;
    dp[i]=1;
    nugget(i+6);
    nugget(i+9);
    nugget(i+20);
}
int main() {
    int c=0;
    cin >> n;
    if(n<6)cout << "no";
    nugget(0);
    for(int i=1 ; i<=n ; i++)
        if(dp[i] == 1)
            cout << i << endl;
}
